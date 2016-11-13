/*Yuletronics christmas tree
  Greg Brooks 2016
*/

/*Todo when it works:
*Finish push button code so that brightness can be changed, even during fading loop
*Replace current_group bool with a spare bit in the msg/current_state byte
*Uncomment push button code
*/

#include "ch.h"
#include "hal.h"
#include <stdlib.h>

// Colour macros (for 3 bit message format)
#define COL_RED 1
#define COL_GRN 2
#define COL_BLU 4

#define COL_YLW (COL_RED + COL_GRN)
#define COL_CYN (COL_GRN + COL_BLU)
#define COL_MAG (COL_RED + COL_BLU)

#define COL_WHT (COL_RED + COL_GRN + COL_BLU)

#define PWM_PERIOD 1024  // ~0.01s in systicks

// NEED UTEX PROTECTION
// Shared variable to define current LED channel state (3 bits)
static uint8_t current_state = 1;  // Current led channel state (channels 1 to 3) 00xxxBGR

// Shared variable defines which channel is active
static bool current_group = false; /* led group that is currently active 
                                    * false for led group 1, true for group 2 */
									

static void updateleds(uint8_t bits, bool group, uint16_t dcycle){
  //Function to abstract pwm channels
  // bits contain rgb combination 00xxxBGR
  // group  = false for group 1, true for group 2
  // dcycle is duty cycle in systicks
  chSysLockFromISR(); // So that dcycle doesn't change halfway through
  if (group){
    if (bits & COL_RED) pwmEnableChannel(&PWMD2, 1, dcycle);
    if (bits & COL_GRN) pwmEnableChannel(&PWMD2, 2, dcycle);
    if (bits & COL_BLU) pwmEnableChannel(&PWMD3, 2, dcycle);
  }

  else {
    if (bits & COL_RED) pwmEnableChannel(&PWMD2, 3, dcycle);
    if (bits & COL_GRN) pwmEnableChannel(&PWMD2, 4, dcycle);
    if (bits & COL_BLU) pwmEnableChannel(&PWMD3, 1, dcycle);
  }
  chSysUnlockFromISR();
}

/* Button interrupt callback */
/*void button_press(EXTDriver *extp, expchannel_t channel) {

	(void)extp;
	(void)channel;
    extChannelDisable(&extp, &channel);
	//Debounce
	chThdSleepMilliseconds(100);  // Adjust to taste
	if (palReadLine(BUTTON)){
		chSysLockFromISR();
		bright = current_state & 56 >> 3;
		bright = (bright + 1)%5  // 0 to 4
		current_state = (current_state & 199) + (bright << 3);
		uint16_t dcycle = (PWM_PERIOD * bright)/4;
		
		updateleds(current_state, current_group, dcycle);  // Refresh LEDs
		chSysUnlockFromISR();
		//!!Button interrupt needs to send current state to updateleds, to refresh display
	}

}*/


/*
 * PWM configuration structure.
 */
static PWMConfig pwm2cfg = {
  10000,                                 /* 10kHz PWM clock frequency.   */
  PWM_PERIOD,                            /* PWM period 0.01S (in ticks).    */
  NULL,
  {
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_ACTIVE_HIGH, NULL}
  },
  0,
  0,
};

static PWMConfig pwm3cfg = {
  10000,                                 /* 10kHz PWM clock frequency.   */
  PWM_PERIOD,                            /* PWM period 0.01S (in ticks).    */
  NULL,
  {
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_DISABLED, NULL},
    {PWM_OUTPUT_DISABLED, NULL}
  },
  0,
  0,
};


/* Interrupt Configuration */
//static const EXTConfig extcfg = {
//  {
//    {EXT_CH_MODE_DISABLED, NULL}, /* Px0 */
//    {EXT_CH_MODE_DISABLED, NULL}, /* Px1 */
//    {EXT_CH_MODE_DISABLED, NULL}, /* Px2 */
//    {EXT_CH_MODE_DISABLED, NULL}, /* Px3 */
//    {EXT_CH_MODE_RISING_EDGE | EXT_CH_MODE_AUTOSTART | EXT_MODE_GPIOA, button_press}, /* PA4 PUSH BUTTON*/
//    {EXT_CH_MODE_DISABLED, NULL}, /* Px5 */
//    {EXT_CH_MODE_DISABLED, NULL}, /* Px6 */
//    {EXT_CH_MODE_DISABLED, NULL}, /* Px7 */
//    {EXT_CH_MODE_DISABLED, NULL}, /* Px8 */
//    {EXT_CH_MODE_DISABLED, NULL}, /* Px9 */
//    {EXT_CH_MODE_DISABLED, NULL}, /* Px10 */
//    {EXT_CH_MODE_DISABLED, NULL}, /* Px11 */
//    {EXT_CH_MODE_DISABLED, NULL}, /* Px12 */
//    {EXT_CH_MODE_DISABLED, NULL}, /* Px13 */
//    {EXT_CH_MODE_DISABLED, NULL}, /* Px14 */
//    {EXT_CH_MODE_DISABLED, NULL}, /* Px15 */
//    {EXT_CH_MODE_DISABLED, NULL}, /* PVD Wakeup */
//    {EXT_CH_MODE_DISABLED, NULL}, /* RTC Alarm Event */
//    {EXT_CH_MODE_DISABLED, NULL}, /* USB OTG FS Wakeup */
//    {EXT_CH_MODE_DISABLED, NULL}, /* Ethernet Wakeup */
//    {EXT_CH_MODE_DISABLED, NULL}, /* USB OTG HS Wakeup */
//    {EXT_CH_MODE_DISABLED, NULL}, /* RTC Timestamp */
//    {EXT_CH_MODE_DISABLED, NULL}  /* RTC Wakeup */
//  } 
//};
//*/

/*
 * LED fader thread, times are in milliseconds.
 */
static THD_WORKING_AREA(waLEDS, 128);
static THD_FUNCTION(LEDS, arg) {
  mailbox_t* mbox = (mailbox_t *)arg;
  msg_t msg, result;
  
  while (true) {
      result = chMBFetch(mbox, &msg, TIME_INFINITE);  // Fetch LED request
      if(result == MSG_OK) {
		// Make this a mutex protected global so brightness callback can edit it during for loop operation? Need to update it within for loop then
        uint8_t brightness = (msg & 56) >> 3;       // Separate brightness value into a 0-5 (decimal) value
        brightness = (PWM_PERIOD * brightness) / 5;  // Now express as a number of systicks (max 1 wave period) 

        
        for(uint16_t dcycle = 0; dcycle < brightness; dcycle++){
          //fade down current state
          updateleds(current_state, current_group, brightness - dcycle);          

          // Fade up next state
          updateleds(msg & 7, !current_group, dcycle);
		  
          chThdSleepMicroseconds(500);  // Adjust delay to control time taken to fade
        }

        //Update status variables
        current_state = msg & 63;  // Update current state variable
        current_group = !current_group; // Other group is now active
      }
  }
}

static THD_WORKING_AREA(waLEDC, 128);
static THD_FUNCTION(LEDC, arg) {
	mailbox_t* mbox = (mailbox_t *)arg;
	
	while(true){
	  uint8_t next_state = 0;
	  // To limit current usage, only 4 channels can be lit at a time
	  uint8_t num_remaining = 4 - ((current_state & 1) + ((current_state & 2) / 2) + ((current_state & 4) / 4));
	  
	  next_state = 1 << (rand() % 4);  // Guarantee at least one set bit
	  for (int i = 1; i < num_remaining; i++){
		next_state = next_state || (1 << (rand() % 4)); /* If shifted by 3, next state doesn't change
		                                                 * as only least 3 bits are used */
	  }
	  next_state = next_state & 7;  //Ensure only 3 bits can be set 
	  
	  //Now add brightness bits
	  //next_state += current_state & 56;  // UNCOMMENT WHEN READY TO TEST VARIABLE BRIGHTNESS

	  /* Message format (LSB is #0):
	   * 0 to 2 : led channels to light next (00000BGR)
	   *          note that current number of lit channels + next no. of lit channels <= 4
           * 3 to 5 : brightness level (0 to 8 in decimal)
           *
           * So overall message: (00xxxBGR)
	   */
	  //chMBPost(mbox, next_state & (brightness bits), TIME_INFINITE);   // UNCOMMENT WHEN READY TO TEST VARIABLE BRIGHTNESS
          chMBPost(mbox, next_state || 56, TIME_INFINITE);  // Max brightness
	  chThdSleepSeconds(5);  // Change colours every 5 seconds
    }
}

/*
 * Application entry point.
 */
int main(void) {

  /*
   * System initializations.
   * - HAL initialization, this also initializes the configured device drivers
   *   and performs the board-specific initializations.
   * - Kernel initialization, the main() function becomes a thread and the
   *   RTOS is active.
   */
  halInit();
  chSysInit();

  //Create thread mailbox
  mailbox_t mbox;
  msg_t mbox_buffer[3];
  chMBObjectInit(&mbox,mbox_buffer, 3);
  
  // Initialise PWM drivers
  pwmStart(&PWMD2, &pwm2cfg);
  pwmStart(&PWMD3, &pwm3cfg);

  // Create threads.
  chThdCreateStatic(waLEDS, sizeof(waLEDS), NORMALPRIO, LEDS, (void *)&mbox);
  chThdCreateStatic(waLEDC, sizeof(waLEDC), NORMALPRIO, LEDC, (void *)&mbox);

  // Normal main() thread activity
  while (true) {
    chThdSleepMilliseconds(5000);  // Do nothing
  }
  return 0;
}

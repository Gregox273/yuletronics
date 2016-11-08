/*Yuletronics christmas tree
  Greg Brooks 2016
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


// Shared variable to define current LED channel state (3 bits)
static uint8_t current_state = 1;  // Current led channel state (channels 1 to 3)

/*
 * PWM cyclic callback.
 * Changes duty cycle
 */
static void pwmpcb(PWMDriver *pwmp) {
 
  (void)pwmp;
  // Do things
  
  /* Increment fade completion/progress variable
   * which varies from 0 to brighness
   */
}


/*
 * PWM configuration structure.
 */
static PWMConfig pwm2cfg = {
  10000,                                 /* 10kHz PWM clock frequency.   */
  PWM_PERIOD,                            /* PWM period 0.01S (in ticks).    */
  pwmpcb,
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
  pwmpcb,
  {
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_DISABLED, NULL},
    {PWM_OUTPUT_DISABLED, NULL}
  },
  0,
  0,
};


/*
 * LED fader thread, times are in milliseconds.
 */
static THD_WORKING_AREA(waLEDS, 128);
static THD_FUNCTION(LEDS, arg) {
  mailbox_t* mbox = (mailbox_t *)arg;
  msg_t msg, result;
  bool current_group = false; /* led group that is currently active 
                               * false for led group 1, true for group 2 */
  
  while (true) {
      result = chMBFetch(mbox, &msg, TIME_INFINITE);  // Fetch LED request
      if(result == MSG_OK) {
        uint8_t brightness = (msg & 56) / 8;       // Separate brightness value into a 0-8 (decimal) value
        brightness = PWM_PERIOD * brightness / 8;  // Now express as a number of systicks (max 1 wave period) 
        // Do PWM things
        current_group = !current_group; // Other group is now active
        for(uint16_t dcycle = 0; dcycle < brightness; dcycle++){

          !!!!!
          //fade down existing colours
          !!!!!

          if (current_group){
            //if (msg & COL_RED);
	    //if (msg & COL_GRN);
	    //if (msg & COL_BLU);
          }

          else {
            //if (msg & COL_RED);
	    //if (msg & COL_GRN);
	    //if (msg & COL_BLU);
	  }
          chThdSleepMicroseconds(500);  // Adjust to control time taken to fade
        }
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
	  
	  next_state = next_state || (1 << (rand() % 4));  // Guarantee at least one set bit
	  for (int i = 1; i < num_remaining; i++){
		next_state = next_state || (1 << (rand() % 4)); /* If shifted by 3, next state doesn't change
		                                                * as only least 3 bits are used */
	  }
	  next_state = next_state & 7;  //Ensure only 3 bits can be set 
	  //chMBPost(mbox, next_state & brightness bits, TIME_INFINITE);
          chMBPost(mbox, next_state || 56, TIME_INFINITE);  // Max brightness
	  /* Message format (LSB is #0):
	   * 0 to 2 : led channels to light next (LSB -> MSB : R,G,B)
	              note that current number of lit channels + next no. of lit channels <= 4
           * 3 to 5 : brightness level (0 to 7 in decimal)
	   */
	  chThdSleepMilliseconds(5000);  // Change colours every 5 seconds
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
    chThdSleepMilliseconds(5000);
  }
  return 0;
}

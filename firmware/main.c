/*Yuletronics christmas tree
  Greg Brooks 2016
*/

#include "ch.h"
#include "hal.h"
// #include "ch_test.h"

static void pwmpcb(PWMDriver *pwmp);

/*
 * PWM configuration structure.
 */
static PWMConfig pwm2cfg = {
  10000,                                 /* 10kHz PWM clock frequency.   */
  10,                                    /* PWM period 0.01S (in ticks).    */
  pwmpcb,
  {
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_ACTIVE_HIGH, NULL}
  },
  0
};

static PWMConfig pwm3cfg = {
  10000,                                 /* 10kHz PWM clock frequency.   */
  10,                                    /* PWM period 0.01S (in ticks).    */
  pwmpcb,
  {
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_DISABLED, NULL},
    {PWM_OUTPUT_DISABLED, NULL}
  },
  0
};

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
 * LED fader thread, times are in milliseconds.
 */
static WORKING_AREA(waLEDS, 128);
static msg LEDS(void * arg) {
  Mailbox* mbox = (Mailbox *)arg;
  msg_t msg, result;
  
  while (true) {
     result = chMBFetch(mbox, &msg, TIME_INFINITE);  // Fetch LED request
        if(result == RDY_OK) {
			//if(msg & 1) - demo of if statement checking a bit of msg?
			
            // Do PWM things
        }
  }
  
  return 0;
}

static WORKING_AREA(waLEDC, 128);
static msg_t LEDC(void * arg) {
	Mailbox* mbox = (Mailbox *)arg;
	uint8_t current_state = 1;  // Current led channel state (channels 1 to 3)
	
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
	  /* Message format (LSB is #0):
	   * 0 to 2 : led channels to light next
	              note that current number of lit channels + next no. of lit channels <= 4
       * 3 to 5 : brightness level (0 to 7 in decimal)
	   */
	  chThdSleepMilliseconds(5000);  // Change colours every 5 seconds
    }
	return 0;
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
  Mailbox mbox;
  msg_t mbox_buffer[3];
  chMBInit(&mbox,mbox_buffer, 3);
  
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

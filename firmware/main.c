/*Yuletronics christmas tree
  Greg Brooks 2016
*/

#include "ch.h"
#include "hal.h"
// #include "ch_test.h"


static void pwmpcb(PWMDriver *pwmp);
/*
 * PWM configuration structure.
 * Cyclic callback ??, channels 1 to 4 enabled without callbacks,
 * the active state is a logic one.
 */
static PWMConfig pwmcfg = {
  ??,                                    /* ?Hz PWM clock frequency.   */
  1000,                                    /* PWM period 1S (in ticks).    */
  pwmpcb,
  {
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_ACTIVE_HIGH, NULL}
  },
  0
};
/*
 * LED fader thread, times are in milliseconds.
 */
static THD_WORKING_AREA(waThread1, 128);
static THD_FUNCTION(Thread1, arg) {

  (void)arg;
  chRegSetThreadName("fader");
  // pwms on 4 random channels
  // Inputs: brightness, switching freq
  while (true) {

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

  /*
   * Activates the serial driver 2 using the driver default configuration.
   */
  // sdStart(&SD2, NULL);

  /*
   * Creates the fader thread.
   */
  chThdCreateStatic(waThread1, sizeof(waThread1), NORMALPRIO, Thread1, NULL);

  /*
   * Normal main() thread activity
   */
  while (true) {
    chThdSleepMilliseconds(1000);
    /* DEMO:
    if (!palReadLine(LINE_ARD_D3))
      test_execute((BaseSequentialStream *)&SD2);
    chThdSleepMilliseconds(500);
    */
  }
}

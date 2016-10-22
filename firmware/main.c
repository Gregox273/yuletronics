/*Yuletronics christmas tree
  Greg Brooks 2016
*/

#include "ch.h"
#include "hal.h"
// #include "ch_test.h"

/*
 * LED fader thread, times are in milliseconds.
 */
static THD_WORKING_AREA(waThread1, 128);
static THD_FUNCTION(Thread1, arg) {

  (void)arg;
  chRegSetThreadName("fader");

  while (true) {
    /* DEMO:
    palClearLine(LINE_LED_GREEN);
    chThdSleepMilliseconds(500);
    palSetLine(LINE_LED_GREEN);
    chThdSleepMilliseconds(500);
    */
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
    /* DEMO:
    if (!palReadLine(LINE_ARD_D3))
      test_execute((BaseSequentialStream *)&SD2);
    chThdSleepMilliseconds(500);
    */
  }
}

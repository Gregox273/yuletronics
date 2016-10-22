/*
    ChibiOS - Copyright (C) 2006..2016 Giovanni Di Sirio
    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef _BOARD_H_
#define _BOARD_H_

/*
    Board identifier
*/
#define BOARD_
#define BOARD_NAME                     "yuletronics_main"

/*
    Board oscillators-related settings.
    Note: HSE, LSE not fitted
*/
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                   0U
#endif

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                   0U
#endif

/*
    Board voltages
    Required for performance limits calculation.
*/
#define STM32_VDD                      330U

/*
    MCU type as defined in the ST header.
*/
#define STM32F042x6

/*
    IO pins assignments.
*/

#define GPIOA_PIN0                     0U
#define GPIOA_PIN1                     1U
#define GPIOA_PIN2                     2U
#define GPIOA_PIN3                     3U
#define GPIOA_PIN4                     4U
#define GPIOA_PIN5                     5U
#define GPIOA_PIN6                     6U
#define GPIOA_PIN7                     7U
#define GPIOA_PIN8                     8U
#define GPIOA_PIN9                     9U
#define GPIOA_PIN10                    10U
#define GPIOA_PIN11                    11U
#define GPIOA_PIN12                    12U
#define GPIOA_PIN13                    13U
#define GPIOA_PIN14                    14U
#define GPIOA_PIN15                    15U

#define GPIOA_BUTTON                   4U
#define GPIOA_USB_DET                  5U
#define GPIOA_USB_DM                   11U
#define GPIOA_USB_DP                   12U
#define GPIOA_SWDIO                    13U
#define GPIOA_SWCLK                    14U


#define GPIOB_PIN0                     0U
#define GPIOB_PIN1                     1U
#define GPIOB_PIN2                     2U
#define GPIOB_PIN3                     3U
#define GPIOB_PIN4                     4U
#define GPIOB_PIN5                     5U
#define GPIOB_PIN6                     6U
#define GPIOB_PIN7                     7U
#define GPIOB_PIN8                     8U
#define GPIOB_PIN9                     9U
#define GPIOB_PIN10                    10U
#define GPIOB_PIN11                    11U
#define GPIOB_PIN12                    12U
#define GPIOB_PIN13                    13U
#define GPIOB_PIN14                    14U
#define GPIOB_PIN15                    15U

#define GPIOB_BOOT0                    8U

#define GPIOC_PIN0                     0U
#define GPIOC_PIN1                     1U
#define GPIOC_PIN2                     2U
#define GPIOC_PIN3                     3U
#define GPIOC_PIN4                     4U
#define GPIOC_PIN5                     5U
#define GPIOC_PIN6                     6U
#define GPIOC_PIN7                     7U
#define GPIOC_PIN8                     8U
#define GPIOC_PIN9                     9U
#define GPIOC_PIN10                    10U
#define GPIOC_PIN11                    11U
#define GPIOC_PIN12                    12U
#define GPIOC_PIN13                    13U
#define GPIOC_PIN14                    14U
#define GPIOC_PIN15                    15U

#define GPIOD_PIN0                     0U
#define GPIOD_PIN1                     1U
#define GPIOD_PIN2                     2U
#define GPIOD_PIN3                     3U
#define GPIOD_PIN4                     4U
#define GPIOD_PIN5                     5U
#define GPIOD_PIN6                     6U
#define GPIOD_PIN7                     7U
#define GPIOD_PIN8                     8U
#define GPIOD_PIN9                     9U
#define GPIOD_PIN10                    10U
#define GPIOD_PIN11                    11U
#define GPIOD_PIN12                    12U
#define GPIOD_PIN13                    13U
#define GPIOD_PIN14                    14U
#define GPIOD_PIN15                    15U

#define GPIOE_PIN0                     0U
#define GPIOE_PIN1                     1U
#define GPIOE_PIN2                     2U
#define GPIOE_PIN3                     3U
#define GPIOE_PIN4                     4U
#define GPIOE_PIN5                     5U
#define GPIOE_PIN6                     6U
#define GPIOE_PIN7                     7U
#define GPIOE_PIN8                     8U
#define GPIOE_PIN9                     9U
#define GPIOE_PIN10                    10U
#define GPIOE_PIN11                    11U
#define GPIOE_PIN12                    12U
#define GPIOE_PIN13                    13U
#define GPIOE_PIN14                    14U
#define GPIOE_PIN15                    15U

#define GPIOF_PIN0                     0U
#define GPIOF_PIN1                     1U
#define GPIOF_PIN2                     2U
#define GPIOF_PIN3                     3U
#define GPIOF_PIN4                     4U
#define GPIOF_PIN5                     5U
#define GPIOF_PIN6                     6U
#define GPIOF_PIN7                     7U
#define GPIOF_PIN8                     8U
#define GPIOF_PIN9                     9U
#define GPIOF_PIN10                    10U
#define GPIOF_PIN11                    11U
#define GPIOF_PIN12                    12U
#define GPIOF_PIN13                    13U
#define GPIOF_PIN14                    14U
#define GPIOF_PIN15                    15U

#define GPIOG_PIN0                     0U
#define GPIOG_PIN1                     1U
#define GPIOG_PIN2                     2U
#define GPIOG_PIN3                     3U
#define GPIOG_PIN4                     4U
#define GPIOG_PIN5                     5U
#define GPIOG_PIN6                     6U
#define GPIOG_PIN7                     7U
#define GPIOG_PIN8                     8U
#define GPIOG_PIN9                     9U
#define GPIOG_PIN10                    10U
#define GPIOG_PIN11                    11U
#define GPIOG_PIN12                    12U
#define GPIOG_PIN13                    13U
#define GPIOG_PIN14                    14U
#define GPIOG_PIN15                    15U

#define GPIOH_PIN0                     0U
#define GPIOH_PIN1                     1U
#define GPIOH_PIN2                     2U
#define GPIOH_PIN3                     3U
#define GPIOH_PIN4                     4U
#define GPIOH_PIN5                     5U
#define GPIOH_PIN6                     6U
#define GPIOH_PIN7                     7U
#define GPIOH_PIN8                     8U
#define GPIOH_PIN9                     9U
#define GPIOH_PIN10                    10U
#define GPIOH_PIN11                    11U
#define GPIOH_PIN12                    12U
#define GPIOH_PIN13                    13U
#define GPIOH_PIN14                    14U
#define GPIOH_PIN15                    15U

#define GPIOI_PIN0                     0U
#define GPIOI_PIN1                     1U
#define GPIOI_PIN2                     2U
#define GPIOI_PIN3                     3U
#define GPIOI_PIN4                     4U
#define GPIOI_PIN5                     5U
#define GPIOI_PIN6                     6U
#define GPIOI_PIN7                     7U
#define GPIOI_PIN8                     8U
#define GPIOI_PIN9                     9U
#define GPIOI_PIN10                    10U
#define GPIOI_PIN11                    11U
#define GPIOI_PIN12                    12U
#define GPIOI_PIN13                    13U
#define GPIOI_PIN14                    14U
#define GPIOI_PIN15                    15U

/*
    IO lines assignments.
*/

#define LINE_SWDIO                     PAL_LINE(GPIOA, 13U)
#define LINE_SWCLK                     PAL_LINE(GPIOA, 14U)
#define LINE_USB_DM                    PAL_LINE(GPIOA, 11U)
#define LINE_USB_DP                    PAL_LINE(GPIOA, 12U)

#define LED2R                          PAL_LINE(GPIOA, 0U)
#define LED2G                          PAL_LINE(GPIOA, 1U)
#define LED1R                          PAL_LINE(GPIOA, 2U)
#define LED1G                          PAL_LINE(GPIOA, 3U)
#define BUTTON                         PAL_LINE(GPIOA, 4U)
#define USB_DET                        PAL_LINE(GPIOA, 5U)
#define LED1B                          PAL_LINE(GPIOA, 6U)
#define LED2B                          PAL_LINE(GPIOA, 7U)

/*
    I/O ports initial setup, this configuration is established soon after reset
    in the initialization code.
     Please refer to the STM32 Reference Manual for details.
*/
#define PIN_MODE_INPUT(n)              (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)             (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)          (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)             (3U << ((n) * 2U))
#define PIN_OD_LOW(n)                  (0U << (n))
#define PIN_OD_HIGH(n)                 (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)          (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)         (1U << (n))
#define PIN_OSPEED_VERYLOW(n)          (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)              (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)           (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)             (3U << ((n) * 2U))
#define PIN_PUPD_FLOATING(n)           (0U << ((n) * 2U))
#define PIN_PUPD_PULLUP(n)             (1U << ((n) * 2U))
#define PIN_PUPD_PULLDOWN(n)           (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)              ((v) << (((n) % 8U) * 4U))

/*
 *  GPIOA setup:
 *
 * PA0  - LED2R                        (af2, floating).
 * PA1  - LED2G                        (af2, floating).
 * PA2  - LED1R                        (af2, floating).
 * PA3  - LED1G                        (af2, floating).
 * PA4  - BUTTON                       (input, floating (external pulldown)).
 * PA5  - USB_DET                      (input, floating (pulled down by external potential divider)).
 * PA6  - LED1B                        (af1, floating).
 * PA7  - LED2B                        (af1, floating).
 * PA8  - PIN8                         (unused).
 * PA9  - PIN9                         (unused).
 * PA10 - PIN10                        (unused).
 * PA11 - USB_DM                       (USB_DM).
 * PA12 - USB_DP                       (USB_DP).
 * PA13 - SWDIO                        (af0).
 * PA14 - SWCLK                        (af0).
 * PA15 - PIN15                        (unused).
*/
#define VAL_GPIOA_MODER                (PIN_MODE_ALTERNATE(GPIOA_PIN0) | \
                                        PIN_MODE_ALTERNATE(GPIOA_PIN1) | \
                                        PIN_MODE_ALTERNATE(GPIOA_PIN2) | \
                                        PIN_MODE_ALTERNATE(GPIOA_PIN3) | \
                                        PIN_MODE_INPUT(GPIOA_PIN4) | \
                                        PIN_MODE_INPUT(GPIOA_PIN5) | \
                                        PIN_MODE_ALTERNATE(GPIOA_PIN6) | \
                                        PIN_MODE_ALTERNATE(GPIOA_PIN7) | \
                                        PIN_MODE_INPUT(GPIOA_PIN8) | \
                                        PIN_MODE_INPUT(GPIOA_PIN9) | \
                                        PIN_MODE_INPUT(GPIOA_PIN10) | \
                                        PIN_MODE_ALTERNATE(GPIOA_USB_DM) | \
                                        PIN_MODE_ALTERNATE(GPIOA_USB_DP) | \
                                        PIN_MODE_ALTERNATE(GPIOA_SWDIO) | \
                                        PIN_MODE_ALTERNATE(GPIOA_SWCLK) | \
                                        PIN_MODE_INPUT(GPIOA_PIN15))
#define VAL_GPIOA_OTYPER               (PIN_OTYPE_PUSHPULL(GPIOA_PIN0) | \
                                        PIN_OTYPE_PUSHPULL(GPIOA_PIN1) | \
                                        PIN_OTYPE_PUSHPULL(GPIOA_PIN2) | \
                                        PIN_OTYPE_PUSHPULL(GPIOA_PIN3) | \
                                        PIN_OTYPE_PUSHPULL(GPIOA_PIN4) | \
                                        PIN_OTYPE_PUSHPULL(GPIOA_PIN5) | \
                                        PIN_OTYPE_PUSHPULL(GPIOA_PIN6) | \
                                        PIN_OTYPE_PUSHPULL(GPIOA_PIN7) | \
                                        PIN_OTYPE_PUSHPULL(GPIOA_PIN8) | \
                                        PIN_OTYPE_PUSHPULL(GPIOA_PIN9) | \
                                        PIN_OTYPE_PUSHPULL(GPIOA_PIN10) | \
                                        PIN_OTYPE_PUSHPULL(GPIOA_USB_DM) | \
                                        PIN_OTYPE_PUSHPULL(GPIOA_USB_DP) | \
                                        PIN_OTYPE_PUSHPULL(GPIOA_PIN13) | \
                                        PIN_OTYPE_PUSHPULL(GPIOA_SWCLK) | \
                                        PIN_OTYPE_PUSHPULL(GPIOA_PIN15))
#define VAL_GPIOA_OSPEEDR              (PIN_OSPEED_HIGH(GPIOA_PIN0) | \
                                        PIN_OSPEED_HIGH(GPIOA_PIN1) | \
                                        PIN_OSPEED_HIGH(GPIOA_PIN2) | \
                                        PIN_OSPEED_HIGH(GPIOA_PIN3) | \
                                        PIN_OSPEED_HIGH(GPIOA_PIN4) | \
                                        PIN_OSPEED_HIGH(GPIOA_PIN5) | \
                                        PIN_OSPEED_HIGH(GPIOA_PIN6) | \
                                        PIN_OSPEED_HIGH(GPIOA_PIN7) | \
                                        PIN_OSPEED_HIGH(GPIOA_PIN8) | \
                                        PIN_OSPEED_HIGH(GPIOA_PIN9) | \
                                        PIN_OSPEED_HIGH(GPIOA_PIN10) | \
                                        PIN_OSPEED_HIGH(GPIOA_USB_DM) | \
                                        PIN_OSPEED_HIGH(GPIOA_USB_DP) | \
                                        PIN_OSPEED_HIGH(GPIOA_SWDIO) | \
                                        PIN_OSPEED_HIGH(GPIOA_SWCLK) | \
                                        PIN_OSPEED_HIGH(GPIOA_PIN15))
#define VAL_GPIOA_PUPDR                (PIN_PUPD_FLOATING(GPIOA_PIN0) | \
                                        PIN_PUPD_FLOATING(GPIOA_PIN1) | \
                                        PIN_PUPD_FLOATING(GPIOA_PIN2) | \
                                        PIN_PUPD_FLOATING(GPIOA_PIN3) | \
                                        PIN_PUPD_FLOATING(GPIOA_PIN4) | \
                                        PIN_PUPD_FLOATING(GPIOA_PIN5) | \
                                        PIN_PUPD_FLOATING(GPIOA_PIN6) | \
                                        PIN_PUPD_FLOATING(GPIOA_PIN7) | \
                                        PIN_PUPD_PULLUP(GPIOA_PIN8) | \
                                        PIN_PUPD_PULLUP(GPIOA_PIN9) | \
                                        PIN_PUPD_PULLUP(GPIOA_PIN10) | \
                                        PIN_PUPD_PULLUP(GPIOA_USB_DM) | \
                                        PIN_PUPD_PULLUP(GPIOA_USB_DP) | \
                                        PIN_PUPD_PULLUP(GPIOA_SWDIO) | \
                                        PIN_PUPD_PULLDOWN(GPIOA_SWCLK) | \
                                        PIN_PUPD_PULLUP(GPIOA_PIN15))
#define VAL_GPIOA_ODR                  (PIN_OD_LOW(GPIOA_PIN0) | \
                                        PIN_OD_LOW(GPIOA_PIN1) | \
                                        PIN_OD_LOW(GPIOA_PIN2) | \
                                        PIN_OD_LOW(GPIOA_PIN3) | \
                                        PIN_OD_HIGH(GPIOA_PIN4) | \
                                        PIN_OD_HIGH(GPIOA_PIN5) | \
                                        PIN_OD_LOW(GPIOA_PIN6) | \
                                        PIN_OD_LOW(GPIOA_PIN7) | \
                                        PIN_OD_HIGH(GPIOA_PIN8) | \
                                        PIN_OD_HIGH(GPIOA_PIN9) | \
                                        PIN_OD_HIGH(GPIOA_PIN10) | \
                                        PIN_OD_HIGH(GPIOA_USB_DM) | \
                                        PIN_OD_HIGH(GPIOA_USB_DP) | \
                                        PIN_OD_HIGH(GPIOA_SWDIO) | \
                                        PIN_OD_HIGH(GPIOA_SWCLK) | \
                                        PIN_OD_HIGH(GPIOA_PIN15))
#define VAL_GPIOA_AFRL                 (PIN_AFIO_AF(GPIOA_PIN0, 2U) | \
                                        PIN_AFIO_AF(GPIOA_PIN1, 2U) | \
                                        PIN_AFIO_AF(GPIOA_PIN2, 2U) | \
                                        PIN_AFIO_AF(GPIOA_PIN3, 2U) | \
                                        PIN_AFIO_AF(GPIOA_PIN4, 0U) | \
                                        PIN_AFIO_AF(GPIOA_PIN5, 0U) | \
                                        PIN_AFIO_AF(GPIOA_PIN6, 1U) | \
                                        PIN_AFIO_AF(GPIOA_PIN7, 1U))
#define VAL_GPIOA_AFRH                 (PIN_AFIO_AF(GPIOA_PIN8, 0U) | \
                                        PIN_AFIO_AF(GPIOA_PIN9, 0U) | \
                                        PIN_AFIO_AF(GPIOA_PIN10, 0U) | \
                                        PIN_AFIO_AF(GPIOA_USB_DM, 0U) | \
                                        PIN_AFIO_AF(GPIOA_USB_DP, 0U) | \
                                        PIN_AFIO_AF(GPIOA_SWDIO, 0U) | \
                                        PIN_AFIO_AF(GPIOA_SWCLK, 0U) | \
                                        PIN_AFIO_AF(GPIOA_PIN15, 0U))

/*
 *  GPIOB setup:
 *
 * PB0  - PIN0                         (unused).
 * PB1  - PIN1                         (unused).
 * PB2  - PIN2                         (unused).
 * PB3  - PIN3                         (unused).
 * PB4  - PIN4                         (unused).
 * PB5  - PIN5                         (unused).
 * PB6  - PIN6                         (unused).
 * PB7  - PIN7                         (unused).
 * PB8  - BOOT0                        (BOOT0).
 * PB9  - PIN9                         (unused).
 * PB10 - PIN10                        (unused).
 * PB11 - PIN11                        (unused).
 * PB12 - PIN12                        (unused).
 * PB13 - PIN13                        (unused).
 * PB14 - PIN14                        (unused).
 * PB15 - PIN15                        (unused).
*/
#define VAL_GPIOB_MODER                (PIN_MODE_INPUT(GPIOB_PIN0) | \
                                        PIN_MODE_INPUT(GPIOB_PIN1) | \
                                        PIN_MODE_INPUT(GPIOB_PIN2) | \
                                        PIN_MODE_INPUT(GPIOB_PIN3) | \
                                        PIN_MODE_INPUT(GPIOB_PIN4) | \
                                        PIN_MODE_INPUT(GPIOB_PIN5) | \
                                        PIN_MODE_INPUT(GPIOB_PIN6) | \
                                        PIN_MODE_INPUT(GPIOB_PIN7) | \
                                        PIN_MODE_ALTERNATE(GPIOB_BOOT0) | \
                                        PIN_MODE_INPUT(GPIOB_PIN9) | \
                                        PIN_MODE_INPUT(GPIOB_PIN10) | \
                                        PIN_MODE_INPUT(GPIOB_PIN11) | \
                                        PIN_MODE_INPUT(GPIOB_PIN12) | \
                                        PIN_MODE_INPUT(GPIOB_PIN13) | \
                                        PIN_MODE_INPUT(GPIOB_PIN14) | \
                                        PIN_MODE_INPUT(GPIOB_PIN15))
#define VAL_GPIOB_OTYPER               (PIN_OTYPE_PUSHPULL(GPIOB_PIN0) | \
                                        PIN_OTYPE_PUSHPULL(GPIOB_PIN1) | \
                                        PIN_OTYPE_PUSHPULL(GPIOB_PIN2) | \
                                        PIN_OTYPE_PUSHPULL(GPIOB_PIN3) | \
                                        PIN_OTYPE_PUSHPULL(GPIOB_PIN4) | \
                                        PIN_OTYPE_PUSHPULL(GPIOB_PIN5) | \
                                        PIN_OTYPE_PUSHPULL(GPIOB_PIN6) | \
                                        PIN_OTYPE_PUSHPULL(GPIOB_PIN7) | \
                                        PIN_OTYPE_PUSHPULL(GPIOB_BOOT0) | \
                                        PIN_OTYPE_PUSHPULL(GPIOB_PIN9) | \
                                        PIN_OTYPE_PUSHPULL(GPIOB_PIN10) | \
                                        PIN_OTYPE_PUSHPULL(GPIOB_PIN11) | \
                                        PIN_OTYPE_PUSHPULL(GPIOB_PIN12) | \
                                        PIN_OTYPE_PUSHPULL(GPIOB_PIN13) | \
                                        PIN_OTYPE_PUSHPULL(GPIOB_PIN14) | \
                                        PIN_OTYPE_PUSHPULL(GPIOB_PIN15))
#define VAL_GPIOB_OSPEEDR              (PIN_OSPEED_VERYLOW(GPIOB_PIN0) | \
                                        PIN_OSPEED_VERYLOW(GPIOB_PIN1) | \
                                        PIN_OSPEED_VERYLOW(GPIOB_PIN2) | \
                                        PIN_OSPEED_VERYLOW(GPIOB_PIN3) | \
                                        PIN_OSPEED_VERYLOW(GPIOB_PIN4) | \
                                        PIN_OSPEED_VERYLOW(GPIOB_PIN5) | \
                                        PIN_OSPEED_VERYLOW(GPIOB_PIN6) | \
                                        PIN_OSPEED_VERYLOW(GPIOB_PIN7) | \
                                        PIN_OSPEED_HIGH(GPIOB_BOOT0) | \
                                        PIN_OSPEED_VERYLOW(GPIOB_PIN9) | \
                                        PIN_OSPEED_VERYLOW(GPIOB_PIN10) | \
                                        PIN_OSPEED_VERYLOW(GPIOB_PIN11) | \
                                        PIN_OSPEED_VERYLOW(GPIOB_PIN12) | \
                                        PIN_OSPEED_VERYLOW(GPIOB_PIN13) | \
                                        PIN_OSPEED_VERYLOW(GPIOB_PIN14) | \
                                        PIN_OSPEED_VERYLOW(GPIOB_PIN15))
#define VAL_GPIOB_PUPDR                (PIN_PUPD_PULLUP(GPIOB_PIN0) | \
                                        PIN_PUPD_PULLUP(GPIOB_PIN1) | \
                                        PIN_PUPD_PULLUP(GPIOB_PIN2) | \
                                        PIN_PUPD_PULLUP(GPIOB_PIN3) | \
                                        PIN_PUPD_PULLUP(GPIOB_PIN4) | \
                                        PIN_PUPD_PULLUP(GPIOB_PIN5) | \
                                        PIN_PUPD_PULLUP(GPIOB_PIN6) | \
                                        PIN_PUPD_PULLUP(GPIOB_PIN7) | \
                                        PIN_PUPD_FLOATING(GPIOB_BOOT0) | \
                                        PIN_PUPD_PULLUP(GPIOB_PIN9) | \
                                        PIN_PUPD_PULLUP(GPIOB_PIN10) | \
                                        PIN_PUPD_PULLUP(GPIOB_PIN11) | \
                                        PIN_PUPD_PULLUP(GPIOB_PIN12) | \
                                        PIN_PUPD_PULLUP(GPIOB_PIN13) | \
                                        PIN_PUPD_PULLUP(GPIOB_PIN14) | \
                                        PIN_PUPD_PULLUP(GPIOB_PIN15))
#define VAL_GPIOB_ODR                  (PIN_OD_HIGH(GPIOB_PIN0) | \
                                        PIN_OD_HIGH(GPIOB_PIN1) | \
                                        PIN_OD_HIGH(GPIOB_PIN2) | \
                                        PIN_OD_HIGH(GPIOB_PIN3) | \
                                        PIN_OD_HIGH(GPIOB_PIN4) | \
                                        PIN_OD_HIGH(GPIOB_PIN5) | \
                                        PIN_OD_HIGH(GPIOB_PIN6) | \
                                        PIN_OD_HIGH(GPIOB_PIN7) | \
                                        PIN_OD_HIGH(GPIOB_BOOT0) | \
                                        PIN_OD_HIGH(GPIOB_PIN9) | \
                                        PIN_OD_HIGH(GPIOB_PIN10) | \
                                        PIN_OD_HIGH(GPIOB_PIN11) | \
                                        PIN_OD_HIGH(GPIOB_PIN12) | \
                                        PIN_OD_HIGH(GPIOB_PIN13) | \
                                        PIN_OD_HIGH(GPIOB_PIN14) | \
                                        PIN_OD_HIGH(GPIOB_PIN15))
#define VAL_GPIOB_AFRL                 (PIN_AFIO_AF(GPIOB_PIN0, 0U) | \
                                        PIN_AFIO_AF(GPIOB_PIN1, 0U) | \
                                        PIN_AFIO_AF(GPIOB_PIN2, 0U) | \
                                        PIN_AFIO_AF(GPIOB_PIN3, 0U) | \
                                        PIN_AFIO_AF(GPIOB_PIN4, 0U) | \
                                        PIN_AFIO_AF(GPIOB_PIN5, 0U) | \
                                        PIN_AFIO_AF(GPIOB_PIN6, 0U) | \
                                        PIN_AFIO_AF(GPIOB_PIN7, 0U))
#define VAL_GPIOB_AFRH                 (PIN_AFIO_AF(GPIOB_BOOT0, 0U) | \
                                        PIN_AFIO_AF(GPIOB_PIN9, 0U) | \
                                        PIN_AFIO_AF(GPIOB_PIN10, 0U) | \
                                        PIN_AFIO_AF(GPIOB_PIN11, 0U) | \
                                        PIN_AFIO_AF(GPIOB_PIN12, 0U) | \
                                        PIN_AFIO_AF(GPIOB_PIN13, 0U) | \
                                        PIN_AFIO_AF(GPIOB_PIN14, 0U) | \
                                        PIN_AFIO_AF(GPIOB_PIN15, 0U))

/*
 *  GPIOC setup:
 *
 * PC0  - PIN0                         (unused).
 * PC1  - PIN1                         (unused).
 * PC2  - PIN2                         (unused).
 * PC3  - PIN3                         (unused).
 * PC4  - PIN4                         (unused).
 * PC5  - PIN5                         (unused).
 * PC6  - PIN6                         (unused).
 * PC7  - PIN7                         (unused).
 * PC8  - PIN8                         (unused).
 * PC9  - PIN9                         (unused).
 * PC10 - PIN10                        (unused).
 * PC11 - PIN11                        (unused).
 * PC12 - PIN12                        (unused).
 * PC13 - PIN13                        (unused).
 * PC14 - PIN14                        (unused).
 * PC15 - PIN15                        (unused).
*/
#define VAL_GPIOC_MODER                (PIN_MODE_INPUT(GPIOC_PIN0) | \
                                        PIN_MODE_INPUT(GPIOC_PIN1) | \
                                        PIN_MODE_INPUT(GPIOC_PIN2) | \
                                        PIN_MODE_INPUT(GPIOC_PIN3) | \
                                        PIN_MODE_INPUT(GPIOC_PIN4) | \
                                        PIN_MODE_INPUT(GPIOC_PIN5) | \
                                        PIN_MODE_INPUT(GPIOC_PIN6) | \
                                        PIN_MODE_INPUT(GPIOC_PIN7) | \
                                        PIN_MODE_INPUT(GPIOC_PIN8) | \
                                        PIN_MODE_INPUT(GPIOC_PIN9) | \
                                        PIN_MODE_INPUT(GPIOC_PIN10) | \
                                        PIN_MODE_INPUT(GPIOC_PIN11) | \
                                        PIN_MODE_INPUT(GPIOC_PIN12) | \
                                        PIN_MODE_INPUT(GPIOC_PIN13) | \
                                        PIN_MODE_INPUT(GPIOC_PIN14) | \
                                        PIN_MODE_INPUT(GPIOC_PIN15))
#define VAL_GPIOC_OTYPER               (PIN_OTYPE_PUSHPULL(GPIOC_PIN0) | \
                                        PIN_OTYPE_PUSHPULL(GPIOC_PIN1) | \
                                        PIN_OTYPE_PUSHPULL(GPIOC_PIN2) | \
                                        PIN_OTYPE_PUSHPULL(GPIOC_PIN3) | \
                                        PIN_OTYPE_PUSHPULL(GPIOC_PIN4) | \
                                        PIN_OTYPE_PUSHPULL(GPIOC_PIN5) | \
                                        PIN_OTYPE_PUSHPULL(GPIOC_PIN6) | \
                                        PIN_OTYPE_PUSHPULL(GPIOC_PIN7) | \
                                        PIN_OTYPE_PUSHPULL(GPIOC_PIN8) | \
                                        PIN_OTYPE_PUSHPULL(GPIOC_PIN9) | \
                                        PIN_OTYPE_PUSHPULL(GPIOC_PIN10) | \
                                        PIN_OTYPE_PUSHPULL(GPIOC_PIN11) | \
                                        PIN_OTYPE_PUSHPULL(GPIOC_PIN12) | \
                                        PIN_OTYPE_PUSHPULL(GPIOC_PIN13) | \
                                        PIN_OTYPE_PUSHPULL(GPIOC_PIN14) | \
                                        PIN_OTYPE_PUSHPULL(GPIOC_PIN15))
#define VAL_GPIOC_OSPEEDR              (PIN_OSPEED_VERYLOW(GPIOC_PIN0) | \
                                        PIN_OSPEED_VERYLOW(GPIOC_PIN1) | \
                                        PIN_OSPEED_VERYLOW(GPIOC_PIN2) | \
                                        PIN_OSPEED_VERYLOW(GPIOC_PIN3) | \
                                        PIN_OSPEED_VERYLOW(GPIOC_PIN4) | \
                                        PIN_OSPEED_VERYLOW(GPIOC_PIN5) | \
                                        PIN_OSPEED_VERYLOW(GPIOC_PIN6) | \
                                        PIN_OSPEED_VERYLOW(GPIOC_PIN7) | \
                                        PIN_OSPEED_VERYLOW(GPIOC_PIN8) | \
                                        PIN_OSPEED_VERYLOW(GPIOC_PIN9) | \
                                        PIN_OSPEED_VERYLOW(GPIOC_PIN10) | \
                                        PIN_OSPEED_VERYLOW(GPIOC_PIN11) | \
                                        PIN_OSPEED_VERYLOW(GPIOC_PIN12) | \
                                        PIN_OSPEED_VERYLOW(GPIOC_PIN13) | \
                                        PIN_OSPEED_VERYLOW(GPIOC_PIN14) | \
                                        PIN_OSPEED_VERYLOW(GPIOC_PIN15))
#define VAL_GPIOC_PUPDR                (PIN_PUPD_PULLUP(GPIOC_PIN0) | \
                                        PIN_PUPD_PULLUP(GPIOC_PIN1) | \
                                        PIN_PUPD_PULLUP(GPIOC_PIN2) | \
                                        PIN_PUPD_PULLUP(GPIOC_PIN3) | \
                                        PIN_PUPD_PULLUP(GPIOC_PIN4) | \
                                        PIN_PUPD_PULLUP(GPIOC_PIN5) | \
                                        PIN_PUPD_PULLUP(GPIOC_PIN6) | \
                                        PIN_PUPD_PULLUP(GPIOC_PIN7) | \
                                        PIN_PUPD_PULLUP(GPIOC_PIN8) | \
                                        PIN_PUPD_PULLUP(GPIOC_PIN9) | \
                                        PIN_PUPD_PULLUP(GPIOC_PIN10) | \
                                        PIN_PUPD_PULLUP(GPIOC_PIN11) | \
                                        PIN_PUPD_PULLUP(GPIOC_PIN12) | \
                                        PIN_PUPD_PULLUP(GPIOC_PIN13) | \
                                        PIN_PUPD_PULLUP(GPIOC_PIN14) | \
                                        PIN_PUPD_PULLUP(GPIOC_PIN15))
#define VAL_GPIOC_ODR                  (PIN_OD_HIGH(GPIOC_PIN0) | \
                                        PIN_OD_HIGH(GPIOC_PIN1) | \
                                        PIN_OD_HIGH(GPIOC_PIN2) | \
                                        PIN_OD_HIGH(GPIOC_PIN3) | \
                                        PIN_OD_HIGH(GPIOC_PIN4) | \
                                        PIN_OD_HIGH(GPIOC_PIN5) | \
                                        PIN_OD_HIGH(GPIOC_PIN6) | \
                                        PIN_OD_HIGH(GPIOC_PIN7) | \
                                        PIN_OD_HIGH(GPIOC_PIN8) | \
                                        PIN_OD_HIGH(GPIOC_PIN9) | \
                                        PIN_OD_HIGH(GPIOC_PIN10) | \
                                        PIN_OD_HIGH(GPIOC_PIN11) | \
                                        PIN_OD_HIGH(GPIOC_PIN12) | \
                                        PIN_OD_HIGH(GPIOC_PIN13) | \
                                        PIN_OD_HIGH(GPIOC_PIN14) | \
                                        PIN_OD_HIGH(GPIOC_PIN15))
#define VAL_GPIOC_AFRL                 (PIN_AFIO_AF(GPIOC_PIN0, 0U) | \
                                        PIN_AFIO_AF(GPIOC_PIN1, 0U) | \
                                        PIN_AFIO_AF(GPIOC_PIN2, 0U) | \
                                        PIN_AFIO_AF(GPIOC_PIN3, 0U) | \
                                        PIN_AFIO_AF(GPIOC_PIN4, 0U) | \
                                        PIN_AFIO_AF(GPIOC_PIN5, 0U) | \
                                        PIN_AFIO_AF(GPIOC_PIN6, 0U) | \
                                        PIN_AFIO_AF(GPIOC_PIN7, 0U))
#define VAL_GPIOC_AFRH                 (PIN_AFIO_AF(GPIOC_PIN8, 0U) | \
                                        PIN_AFIO_AF(GPIOC_PIN9, 0U) | \
                                        PIN_AFIO_AF(GPIOC_PIN10, 0U) | \
                                        PIN_AFIO_AF(GPIOC_PIN11, 0U) | \
                                        PIN_AFIO_AF(GPIOC_PIN12, 0U) | \
                                        PIN_AFIO_AF(GPIOC_PIN13, 0U) | \
                                        PIN_AFIO_AF(GPIOC_PIN14, 0U) | \
                                        PIN_AFIO_AF(GPIOC_PIN15, 0U))

/*
 *  GPIOD setup:
 *
 * PD0  - PIN0                         (unused).
 * PD1  - PIN1                         (unused).
 * PD2  - PIN2                         (unused).
 * PD3  - PIN3                         (unused).
 * PD4  - PIN4                         (unused).
 * PD5  - PIN5                         (unused).
 * PD6  - PIN6                         (unused).
 * PD7  - PIN7                         (unused).
 * PD8  - PIN8                         (unused).
 * PD9  - PIN9                         (unused).
 * PD10 - PIN10                        (unused).
 * PD11 - PIN11                        (unused).
 * PD12 - PIN12                        (unused).
 * PD13 - PIN13                        (unused).
 * PD14 - PIN14                        (unused).
 * PD15 - PIN15                        (unused).
*/
#define VAL_GPIOD_MODER                (PIN_MODE_INPUT(GPIOD_PIN0) | \
                                        PIN_MODE_INPUT(GPIOD_PIN1) | \
                                        PIN_MODE_INPUT(GPIOD_PIN2) | \
                                        PIN_MODE_INPUT(GPIOD_PIN3) | \
                                        PIN_MODE_INPUT(GPIOD_PIN4) | \
                                        PIN_MODE_INPUT(GPIOD_PIN5) | \
                                        PIN_MODE_INPUT(GPIOD_PIN6) | \
                                        PIN_MODE_INPUT(GPIOD_PIN7) | \
                                        PIN_MODE_INPUT(GPIOD_PIN8) | \
                                        PIN_MODE_INPUT(GPIOD_PIN9) | \
                                        PIN_MODE_INPUT(GPIOD_PIN10) | \
                                        PIN_MODE_INPUT(GPIOD_PIN11) | \
                                        PIN_MODE_INPUT(GPIOD_PIN12) | \
                                        PIN_MODE_INPUT(GPIOD_PIN13) | \
                                        PIN_MODE_INPUT(GPIOD_PIN14) | \
                                        PIN_MODE_INPUT(GPIOD_PIN15))
#define VAL_GPIOD_OTYPER               (PIN_OTYPE_PUSHPULL(GPIOD_PIN0) | \
                                        PIN_OTYPE_PUSHPULL(GPIOD_PIN1) | \
                                        PIN_OTYPE_PUSHPULL(GPIOD_PIN2) | \
                                        PIN_OTYPE_PUSHPULL(GPIOD_PIN3) | \
                                        PIN_OTYPE_PUSHPULL(GPIOD_PIN4) | \
                                        PIN_OTYPE_PUSHPULL(GPIOD_PIN5) | \
                                        PIN_OTYPE_PUSHPULL(GPIOD_PIN6) | \
                                        PIN_OTYPE_PUSHPULL(GPIOD_PIN7) | \
                                        PIN_OTYPE_PUSHPULL(GPIOD_PIN8) | \
                                        PIN_OTYPE_PUSHPULL(GPIOD_PIN9) | \
                                        PIN_OTYPE_PUSHPULL(GPIOD_PIN10) | \
                                        PIN_OTYPE_PUSHPULL(GPIOD_PIN11) | \
                                        PIN_OTYPE_PUSHPULL(GPIOD_PIN12) | \
                                        PIN_OTYPE_PUSHPULL(GPIOD_PIN13) | \
                                        PIN_OTYPE_PUSHPULL(GPIOD_PIN14) | \
                                        PIN_OTYPE_PUSHPULL(GPIOD_PIN15))
#define VAL_GPIOD_OSPEEDR              (PIN_OSPEED_VERYLOW(GPIOD_PIN0) | \
                                        PIN_OSPEED_VERYLOW(GPIOD_PIN1) | \
                                        PIN_OSPEED_VERYLOW(GPIOD_PIN2) | \
                                        PIN_OSPEED_VERYLOW(GPIOD_PIN3) | \
                                        PIN_OSPEED_VERYLOW(GPIOD_PIN4) | \
                                        PIN_OSPEED_VERYLOW(GPIOD_PIN5) | \
                                        PIN_OSPEED_VERYLOW(GPIOD_PIN6) | \
                                        PIN_OSPEED_VERYLOW(GPIOD_PIN7) | \
                                        PIN_OSPEED_VERYLOW(GPIOD_PIN8) | \
                                        PIN_OSPEED_VERYLOW(GPIOD_PIN9) | \
                                        PIN_OSPEED_VERYLOW(GPIOD_PIN10) | \
                                        PIN_OSPEED_VERYLOW(GPIOD_PIN11) | \
                                        PIN_OSPEED_VERYLOW(GPIOD_PIN12) | \
                                        PIN_OSPEED_VERYLOW(GPIOD_PIN13) | \
                                        PIN_OSPEED_VERYLOW(GPIOD_PIN14) | \
                                        PIN_OSPEED_VERYLOW(GPIOD_PIN15))
#define VAL_GPIOD_PUPDR                (PIN_PUPD_PULLUP(GPIOD_PIN0) | \
                                        PIN_PUPD_PULLUP(GPIOD_PIN1) | \
                                        PIN_PUPD_PULLUP(GPIOD_PIN2) | \
                                        PIN_PUPD_PULLUP(GPIOD_PIN3) | \
                                        PIN_PUPD_PULLUP(GPIOD_PIN4) | \
                                        PIN_PUPD_PULLUP(GPIOD_PIN5) | \
                                        PIN_PUPD_PULLUP(GPIOD_PIN6) | \
                                        PIN_PUPD_PULLUP(GPIOD_PIN7) | \
                                        PIN_PUPD_PULLUP(GPIOD_PIN8) | \
                                        PIN_PUPD_PULLUP(GPIOD_PIN9) | \
                                        PIN_PUPD_PULLUP(GPIOD_PIN10) | \
                                        PIN_PUPD_PULLUP(GPIOD_PIN11) | \
                                        PIN_PUPD_PULLUP(GPIOD_PIN12) | \
                                        PIN_PUPD_PULLUP(GPIOD_PIN13) | \
                                        PIN_PUPD_PULLUP(GPIOD_PIN14) | \
                                        PIN_PUPD_PULLUP(GPIOD_PIN15))
#define VAL_GPIOD_ODR                  (PIN_OD_HIGH(GPIOD_PIN0) | \
                                        PIN_OD_HIGH(GPIOD_PIN1) | \
                                        PIN_OD_HIGH(GPIOD_PIN2) | \
                                        PIN_OD_HIGH(GPIOD_PIN3) | \
                                        PIN_OD_HIGH(GPIOD_PIN4) | \
                                        PIN_OD_HIGH(GPIOD_PIN5) | \
                                        PIN_OD_HIGH(GPIOD_PIN6) | \
                                        PIN_OD_HIGH(GPIOD_PIN7) | \
                                        PIN_OD_HIGH(GPIOD_PIN8) | \
                                        PIN_OD_HIGH(GPIOD_PIN9) | \
                                        PIN_OD_HIGH(GPIOD_PIN10) | \
                                        PIN_OD_HIGH(GPIOD_PIN11) | \
                                        PIN_OD_HIGH(GPIOD_PIN12) | \
                                        PIN_OD_HIGH(GPIOD_PIN13) | \
                                        PIN_OD_HIGH(GPIOD_PIN14) | \
                                        PIN_OD_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_AFRL                 (PIN_AFIO_AF(GPIOD_PIN0, 0U) | \
                                        PIN_AFIO_AF(GPIOD_PIN1, 0U) | \
                                        PIN_AFIO_AF(GPIOD_PIN2, 0U) | \
                                        PIN_AFIO_AF(GPIOD_PIN3, 0U) | \
                                        PIN_AFIO_AF(GPIOD_PIN4, 0U) | \
                                        PIN_AFIO_AF(GPIOD_PIN5, 0U) | \
                                        PIN_AFIO_AF(GPIOD_PIN6, 0U) | \
                                        PIN_AFIO_AF(GPIOD_PIN7, 0U))
#define VAL_GPIOD_AFRH                 (PIN_AFIO_AF(GPIOD_PIN8, 0U) | \
                                        PIN_AFIO_AF(GPIOD_PIN9, 0U) | \
                                        PIN_AFIO_AF(GPIOD_PIN10, 0U) | \
                                        PIN_AFIO_AF(GPIOD_PIN11, 0U) | \
                                        PIN_AFIO_AF(GPIOD_PIN12, 0U) | \
                                        PIN_AFIO_AF(GPIOD_PIN13, 0U) | \
                                        PIN_AFIO_AF(GPIOD_PIN14, 0U) | \
                                        PIN_AFIO_AF(GPIOD_PIN15, 0U))

/*
 *  GPIOE setup:
 *
 * PE0  - PIN0                         (unused).
 * PE1  - PIN1                         (unused).
 * PE2  - PIN2                         (unused).
 * PE3  - PIN3                         (unused).
 * PE4  - PIN4                         (unused).
 * PE5  - PIN5                         (unused).
 * PE6  - PIN6                         (unused).
 * PE7  - PIN7                         (unused).
 * PE8  - PIN8                         (unused).
 * PE9  - PIN9                         (unused).
 * PE10 - PIN10                        (unused).
 * PE11 - PIN11                        (unused).
 * PE12 - PIN12                        (unused).
 * PE13 - PIN13                        (unused).
 * PE14 - PIN14                        (unused).
 * PE15 - PIN15                        (unused).
*/
#define VAL_GPIOE_MODER                (PIN_MODE_INPUT(GPIOE_PIN0) | \
                                        PIN_MODE_INPUT(GPIOE_PIN1) | \
                                        PIN_MODE_INPUT(GPIOE_PIN2) | \
                                        PIN_MODE_INPUT(GPIOE_PIN3) | \
                                        PIN_MODE_INPUT(GPIOE_PIN4) | \
                                        PIN_MODE_INPUT(GPIOE_PIN5) | \
                                        PIN_MODE_INPUT(GPIOE_PIN6) | \
                                        PIN_MODE_INPUT(GPIOE_PIN7) | \
                                        PIN_MODE_INPUT(GPIOE_PIN8) | \
                                        PIN_MODE_INPUT(GPIOE_PIN9) | \
                                        PIN_MODE_INPUT(GPIOE_PIN10) | \
                                        PIN_MODE_INPUT(GPIOE_PIN11) | \
                                        PIN_MODE_INPUT(GPIOE_PIN12) | \
                                        PIN_MODE_INPUT(GPIOE_PIN13) | \
                                        PIN_MODE_INPUT(GPIOE_PIN14) | \
                                        PIN_MODE_INPUT(GPIOE_PIN15))
#define VAL_GPIOE_OTYPER               (PIN_OTYPE_PUSHPULL(GPIOE_PIN0) | \
                                        PIN_OTYPE_PUSHPULL(GPIOE_PIN1) | \
                                        PIN_OTYPE_PUSHPULL(GPIOE_PIN2) | \
                                        PIN_OTYPE_PUSHPULL(GPIOE_PIN3) | \
                                        PIN_OTYPE_PUSHPULL(GPIOE_PIN4) | \
                                        PIN_OTYPE_PUSHPULL(GPIOE_PIN5) | \
                                        PIN_OTYPE_PUSHPULL(GPIOE_PIN6) | \
                                        PIN_OTYPE_PUSHPULL(GPIOE_PIN7) | \
                                        PIN_OTYPE_PUSHPULL(GPIOE_PIN8) | \
                                        PIN_OTYPE_PUSHPULL(GPIOE_PIN9) | \
                                        PIN_OTYPE_PUSHPULL(GPIOE_PIN10) | \
                                        PIN_OTYPE_PUSHPULL(GPIOE_PIN11) | \
                                        PIN_OTYPE_PUSHPULL(GPIOE_PIN12) | \
                                        PIN_OTYPE_PUSHPULL(GPIOE_PIN13) | \
                                        PIN_OTYPE_PUSHPULL(GPIOE_PIN14) | \
                                        PIN_OTYPE_PUSHPULL(GPIOE_PIN15))
#define VAL_GPIOE_OSPEEDR              (PIN_OSPEED_VERYLOW(GPIOE_PIN0) | \
                                        PIN_OSPEED_VERYLOW(GPIOE_PIN1) | \
                                        PIN_OSPEED_VERYLOW(GPIOE_PIN2) | \
                                        PIN_OSPEED_VERYLOW(GPIOE_PIN3) | \
                                        PIN_OSPEED_VERYLOW(GPIOE_PIN4) | \
                                        PIN_OSPEED_VERYLOW(GPIOE_PIN5) | \
                                        PIN_OSPEED_VERYLOW(GPIOE_PIN6) | \
                                        PIN_OSPEED_VERYLOW(GPIOE_PIN7) | \
                                        PIN_OSPEED_VERYLOW(GPIOE_PIN8) | \
                                        PIN_OSPEED_VERYLOW(GPIOE_PIN9) | \
                                        PIN_OSPEED_VERYLOW(GPIOE_PIN10) | \
                                        PIN_OSPEED_VERYLOW(GPIOE_PIN11) | \
                                        PIN_OSPEED_VERYLOW(GPIOE_PIN12) | \
                                        PIN_OSPEED_VERYLOW(GPIOE_PIN13) | \
                                        PIN_OSPEED_VERYLOW(GPIOE_PIN14) | \
                                        PIN_OSPEED_VERYLOW(GPIOE_PIN15))
#define VAL_GPIOE_PUPDR                (PIN_PUPD_PULLUP(GPIOE_PIN0) | \
                                        PIN_PUPD_PULLUP(GPIOE_PIN1) | \
                                        PIN_PUPD_PULLUP(GPIOE_PIN2) | \
                                        PIN_PUPD_PULLUP(GPIOE_PIN3) | \
                                        PIN_PUPD_PULLUP(GPIOE_PIN4) | \
                                        PIN_PUPD_PULLUP(GPIOE_PIN5) | \
                                        PIN_PUPD_PULLUP(GPIOE_PIN6) | \
                                        PIN_PUPD_PULLUP(GPIOE_PIN7) | \
                                        PIN_PUPD_PULLUP(GPIOE_PIN8) | \
                                        PIN_PUPD_PULLUP(GPIOE_PIN9) | \
                                        PIN_PUPD_PULLUP(GPIOE_PIN10) | \
                                        PIN_PUPD_PULLUP(GPIOE_PIN11) | \
                                        PIN_PUPD_PULLUP(GPIOE_PIN12) | \
                                        PIN_PUPD_PULLUP(GPIOE_PIN13) | \
                                        PIN_PUPD_PULLUP(GPIOE_PIN14) | \
                                        PIN_PUPD_PULLUP(GPIOE_PIN15))
#define VAL_GPIOE_ODR                  (PIN_OD_HIGH(GPIOE_PIN0) | \
                                        PIN_OD_HIGH(GPIOE_PIN1) | \
                                        PIN_OD_HIGH(GPIOE_PIN2) | \
                                        PIN_OD_HIGH(GPIOE_PIN3) | \
                                        PIN_OD_HIGH(GPIOE_PIN4) | \
                                        PIN_OD_HIGH(GPIOE_PIN5) | \
                                        PIN_OD_HIGH(GPIOE_PIN6) | \
                                        PIN_OD_HIGH(GPIOE_PIN7) | \
                                        PIN_OD_HIGH(GPIOE_PIN8) | \
                                        PIN_OD_HIGH(GPIOE_PIN9) | \
                                        PIN_OD_HIGH(GPIOE_PIN10) | \
                                        PIN_OD_HIGH(GPIOE_PIN11) | \
                                        PIN_OD_HIGH(GPIOE_PIN12) | \
                                        PIN_OD_HIGH(GPIOE_PIN13) | \
                                        PIN_OD_HIGH(GPIOE_PIN14) | \
                                        PIN_OD_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_AFRL                 (PIN_AFIO_AF(GPIOE_PIN0, 0U) | \
                                        PIN_AFIO_AF(GPIOE_PIN1, 0U) | \
                                        PIN_AFIO_AF(GPIOE_PIN2, 0U) | \
                                        PIN_AFIO_AF(GPIOE_PIN3, 0U) | \
                                        PIN_AFIO_AF(GPIOE_PIN4, 0U) | \
                                        PIN_AFIO_AF(GPIOE_PIN5, 0U) | \
                                        PIN_AFIO_AF(GPIOE_PIN6, 0U) | \
                                        PIN_AFIO_AF(GPIOE_PIN7, 0U))
#define VAL_GPIOE_AFRH                 (PIN_AFIO_AF(GPIOE_PIN8, 0U) | \
                                        PIN_AFIO_AF(GPIOE_PIN9, 0U) | \
                                        PIN_AFIO_AF(GPIOE_PIN10, 0U) | \
                                        PIN_AFIO_AF(GPIOE_PIN11, 0U) | \
                                        PIN_AFIO_AF(GPIOE_PIN12, 0U) | \
                                        PIN_AFIO_AF(GPIOE_PIN13, 0U) | \
                                        PIN_AFIO_AF(GPIOE_PIN14, 0U) | \
                                        PIN_AFIO_AF(GPIOE_PIN15, 0U))

/*
 *  GPIOF setup:
 *
 * PF0  - PIN0                         (unused).
 * PF1  - PIN1                         (unused).
 * PF2  - PIN2                         (unused).
 * PF3  - PIN3                         (unused).
 * PF4  - PIN4                         (unused).
 * PF5  - PIN5                         (unused).
 * PF6  - PIN6                         (unused).
 * PF7  - PIN7                         (unused).
 * PF8  - PIN8                         (unused).
 * PF9  - PIN9                         (unused).
 * PF10 - PIN10                        (unused).
 * PF11 - PIN11                        (unused).
 * PF12 - PIN12                        (unused).
 * PF13 - PIN13                        (unused).
 * PF14 - PIN14                        (unused).
 * PF15 - PIN15                        (unused).
*/
#define VAL_GPIOF_MODER                (PIN_MODE_INPUT(GPIOF_PIN0) | \
                                        PIN_MODE_INPUT(GPIOF_PIN1) | \
                                        PIN_MODE_INPUT(GPIOF_PIN2) | \
                                        PIN_MODE_INPUT(GPIOF_PIN3) | \
                                        PIN_MODE_INPUT(GPIOF_PIN4) | \
                                        PIN_MODE_INPUT(GPIOF_PIN5) | \
                                        PIN_MODE_INPUT(GPIOF_PIN6) | \
                                        PIN_MODE_INPUT(GPIOF_PIN7) | \
                                        PIN_MODE_INPUT(GPIOF_PIN8) | \
                                        PIN_MODE_INPUT(GPIOF_PIN9) | \
                                        PIN_MODE_INPUT(GPIOF_PIN10) | \
                                        PIN_MODE_INPUT(GPIOF_PIN11) | \
                                        PIN_MODE_INPUT(GPIOF_PIN12) | \
                                        PIN_MODE_INPUT(GPIOF_PIN13) | \
                                        PIN_MODE_INPUT(GPIOF_PIN14) | \
                                        PIN_MODE_INPUT(GPIOF_PIN15))
#define VAL_GPIOF_OTYPER               (PIN_OTYPE_PUSHPULL(GPIOF_PIN0) | \
                                        PIN_OTYPE_PUSHPULL(GPIOF_PIN1) | \
                                        PIN_OTYPE_PUSHPULL(GPIOF_PIN2) | \
                                        PIN_OTYPE_PUSHPULL(GPIOF_PIN3) | \
                                        PIN_OTYPE_PUSHPULL(GPIOF_PIN4) | \
                                        PIN_OTYPE_PUSHPULL(GPIOF_PIN5) | \
                                        PIN_OTYPE_PUSHPULL(GPIOF_PIN6) | \
                                        PIN_OTYPE_PUSHPULL(GPIOF_PIN7) | \
                                        PIN_OTYPE_PUSHPULL(GPIOF_PIN8) | \
                                        PIN_OTYPE_PUSHPULL(GPIOF_PIN9) | \
                                        PIN_OTYPE_PUSHPULL(GPIOF_PIN10) | \
                                        PIN_OTYPE_PUSHPULL(GPIOF_PIN11) | \
                                        PIN_OTYPE_PUSHPULL(GPIOF_PIN12) | \
                                        PIN_OTYPE_PUSHPULL(GPIOF_PIN13) | \
                                        PIN_OTYPE_PUSHPULL(GPIOF_PIN14) | \
                                        PIN_OTYPE_PUSHPULL(GPIOF_PIN15))
#define VAL_GPIOF_OSPEEDR              (PIN_OSPEED_VERYLOW(GPIOF_PIN0) | \
                                        PIN_OSPEED_VERYLOW(GPIOF_PIN1) | \
                                        PIN_OSPEED_VERYLOW(GPIOF_PIN2) | \
                                        PIN_OSPEED_VERYLOW(GPIOF_PIN3) | \
                                        PIN_OSPEED_VERYLOW(GPIOF_PIN4) | \
                                        PIN_OSPEED_VERYLOW(GPIOF_PIN5) | \
                                        PIN_OSPEED_VERYLOW(GPIOF_PIN6) | \
                                        PIN_OSPEED_VERYLOW(GPIOF_PIN7) | \
                                        PIN_OSPEED_VERYLOW(GPIOF_PIN8) | \
                                        PIN_OSPEED_VERYLOW(GPIOF_PIN9) | \
                                        PIN_OSPEED_VERYLOW(GPIOF_PIN10) | \
                                        PIN_OSPEED_VERYLOW(GPIOF_PIN11) | \
                                        PIN_OSPEED_VERYLOW(GPIOF_PIN12) | \
                                        PIN_OSPEED_VERYLOW(GPIOF_PIN13) | \
                                        PIN_OSPEED_VERYLOW(GPIOF_PIN14) | \
                                        PIN_OSPEED_VERYLOW(GPIOF_PIN15))
#define VAL_GPIOF_PUPDR                (PIN_PUPD_PULLUP(GPIOF_PIN0) | \
                                        PIN_PUPD_PULLUP(GPIOF_PIN1) | \
                                        PIN_PUPD_PULLUP(GPIOF_PIN2) | \
                                        PIN_PUPD_PULLUP(GPIOF_PIN3) | \
                                        PIN_PUPD_PULLUP(GPIOF_PIN4) | \
                                        PIN_PUPD_PULLUP(GPIOF_PIN5) | \
                                        PIN_PUPD_PULLUP(GPIOF_PIN6) | \
                                        PIN_PUPD_PULLUP(GPIOF_PIN7) | \
                                        PIN_PUPD_PULLUP(GPIOF_PIN8) | \
                                        PIN_PUPD_PULLUP(GPIOF_PIN9) | \
                                        PIN_PUPD_PULLUP(GPIOF_PIN10) | \
                                        PIN_PUPD_PULLUP(GPIOF_PIN11) | \
                                        PIN_PUPD_PULLUP(GPIOF_PIN12) | \
                                        PIN_PUPD_PULLUP(GPIOF_PIN13) | \
                                        PIN_PUPD_PULLUP(GPIOF_PIN14) | \
                                        PIN_PUPD_PULLUP(GPIOF_PIN15))
#define VAL_GPIOF_ODR                  (PIN_OD_HIGH(GPIOF_PIN0) | \
                                        PIN_OD_HIGH(GPIOF_PIN1) | \
                                        PIN_OD_HIGH(GPIOF_PIN2) | \
                                        PIN_OD_HIGH(GPIOF_PIN3) | \
                                        PIN_OD_HIGH(GPIOF_PIN4) | \
                                        PIN_OD_HIGH(GPIOF_PIN5) | \
                                        PIN_OD_HIGH(GPIOF_PIN6) | \
                                        PIN_OD_HIGH(GPIOF_PIN7) | \
                                        PIN_OD_HIGH(GPIOF_PIN8) | \
                                        PIN_OD_HIGH(GPIOF_PIN9) | \
                                        PIN_OD_HIGH(GPIOF_PIN10) | \
                                        PIN_OD_HIGH(GPIOF_PIN11) | \
                                        PIN_OD_HIGH(GPIOF_PIN12) | \
                                        PIN_OD_HIGH(GPIOF_PIN13) | \
                                        PIN_OD_HIGH(GPIOF_PIN14) | \
                                        PIN_OD_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_AFRL                 (PIN_AFIO_AF(GPIOF_PIN0, 0U) | \
                                        PIN_AFIO_AF(GPIOF_PIN1, 0U) | \
                                        PIN_AFIO_AF(GPIOF_PIN2, 0U) | \
                                        PIN_AFIO_AF(GPIOF_PIN3, 0U) | \
                                        PIN_AFIO_AF(GPIOF_PIN4, 0U) | \
                                        PIN_AFIO_AF(GPIOF_PIN5, 0U) | \
                                        PIN_AFIO_AF(GPIOF_PIN6, 0U) | \
                                        PIN_AFIO_AF(GPIOF_PIN7, 0U))
#define VAL_GPIOF_AFRH                 (PIN_AFIO_AF(GPIOF_PIN8, 0U) | \
                                        PIN_AFIO_AF(GPIOF_PIN9, 0U) | \
                                        PIN_AFIO_AF(GPIOF_PIN10, 0U) | \
                                        PIN_AFIO_AF(GPIOF_PIN11, 0U) | \
                                        PIN_AFIO_AF(GPIOF_PIN12, 0U) | \
                                        PIN_AFIO_AF(GPIOF_PIN13, 0U) | \
                                        PIN_AFIO_AF(GPIOF_PIN14, 0U) | \
                                        PIN_AFIO_AF(GPIOF_PIN15, 0U))

/*
 *  GPIOG setup:
 *
 * PG0  - PIN0                         (unused).
 * PG1  - PIN1                         (unused).
 * PG2  - PIN2                         (unused).
 * PG3  - PIN3                         (unused).
 * PG4  - PIN4                         (unused).
 * PG5  - PIN5                         (unused).
 * PG6  - PIN6                         (unused).
 * PG7  - PIN7                         (unused).
 * PG8  - PIN8                         (unused).
 * PG9  - PIN9                         (unused).
 * PG10 - PIN10                        (unused).
 * PG11 - PIN11                        (unused).
 * PG12 - PIN12                        (unused).
 * PG13 - PIN13                        (unused).
 * PG14 - PIN14                        (unused).
 * PG15 - PIN15                        (unused).
*/
#define VAL_GPIOG_MODER                (PIN_MODE_INPUT(GPIOG_PIN0) | \
                                        PIN_MODE_INPUT(GPIOG_PIN1) | \
                                        PIN_MODE_INPUT(GPIOG_PIN2) | \
                                        PIN_MODE_INPUT(GPIOG_PIN3) | \
                                        PIN_MODE_INPUT(GPIOG_PIN4) | \
                                        PIN_MODE_INPUT(GPIOG_PIN5) | \
                                        PIN_MODE_INPUT(GPIOG_PIN6) | \
                                        PIN_MODE_INPUT(GPIOG_PIN7) | \
                                        PIN_MODE_INPUT(GPIOG_PIN8) | \
                                        PIN_MODE_INPUT(GPIOG_PIN9) | \
                                        PIN_MODE_INPUT(GPIOG_PIN10) | \
                                        PIN_MODE_INPUT(GPIOG_PIN11) | \
                                        PIN_MODE_INPUT(GPIOG_PIN12) | \
                                        PIN_MODE_INPUT(GPIOG_PIN13) | \
                                        PIN_MODE_INPUT(GPIOG_PIN14) | \
                                        PIN_MODE_INPUT(GPIOG_PIN15))
#define VAL_GPIOG_OTYPER               (PIN_OTYPE_PUSHPULL(GPIOG_PIN0) | \
                                        PIN_OTYPE_PUSHPULL(GPIOG_PIN1) | \
                                        PIN_OTYPE_PUSHPULL(GPIOG_PIN2) | \
                                        PIN_OTYPE_PUSHPULL(GPIOG_PIN3) | \
                                        PIN_OTYPE_PUSHPULL(GPIOG_PIN4) | \
                                        PIN_OTYPE_PUSHPULL(GPIOG_PIN5) | \
                                        PIN_OTYPE_PUSHPULL(GPIOG_PIN6) | \
                                        PIN_OTYPE_PUSHPULL(GPIOG_PIN7) | \
                                        PIN_OTYPE_PUSHPULL(GPIOG_PIN8) | \
                                        PIN_OTYPE_PUSHPULL(GPIOG_PIN9) | \
                                        PIN_OTYPE_PUSHPULL(GPIOG_PIN10) | \
                                        PIN_OTYPE_PUSHPULL(GPIOG_PIN11) | \
                                        PIN_OTYPE_PUSHPULL(GPIOG_PIN12) | \
                                        PIN_OTYPE_PUSHPULL(GPIOG_PIN13) | \
                                        PIN_OTYPE_PUSHPULL(GPIOG_PIN14) | \
                                        PIN_OTYPE_PUSHPULL(GPIOG_PIN15))
#define VAL_GPIOG_OSPEEDR              (PIN_OSPEED_VERYLOW(GPIOG_PIN0) | \
                                        PIN_OSPEED_VERYLOW(GPIOG_PIN1) | \
                                        PIN_OSPEED_VERYLOW(GPIOG_PIN2) | \
                                        PIN_OSPEED_VERYLOW(GPIOG_PIN3) | \
                                        PIN_OSPEED_VERYLOW(GPIOG_PIN4) | \
                                        PIN_OSPEED_VERYLOW(GPIOG_PIN5) | \
                                        PIN_OSPEED_VERYLOW(GPIOG_PIN6) | \
                                        PIN_OSPEED_VERYLOW(GPIOG_PIN7) | \
                                        PIN_OSPEED_VERYLOW(GPIOG_PIN8) | \
                                        PIN_OSPEED_VERYLOW(GPIOG_PIN9) | \
                                        PIN_OSPEED_VERYLOW(GPIOG_PIN10) | \
                                        PIN_OSPEED_VERYLOW(GPIOG_PIN11) | \
                                        PIN_OSPEED_VERYLOW(GPIOG_PIN12) | \
                                        PIN_OSPEED_VERYLOW(GPIOG_PIN13) | \
                                        PIN_OSPEED_VERYLOW(GPIOG_PIN14) | \
                                        PIN_OSPEED_VERYLOW(GPIOG_PIN15))
#define VAL_GPIOG_PUPDR                (PIN_PUPD_PULLUP(GPIOG_PIN0) | \
                                        PIN_PUPD_PULLUP(GPIOG_PIN1) | \
                                        PIN_PUPD_PULLUP(GPIOG_PIN2) | \
                                        PIN_PUPD_PULLUP(GPIOG_PIN3) | \
                                        PIN_PUPD_PULLUP(GPIOG_PIN4) | \
                                        PIN_PUPD_PULLUP(GPIOG_PIN5) | \
                                        PIN_PUPD_PULLUP(GPIOG_PIN6) | \
                                        PIN_PUPD_PULLUP(GPIOG_PIN7) | \
                                        PIN_PUPD_PULLUP(GPIOG_PIN8) | \
                                        PIN_PUPD_PULLUP(GPIOG_PIN9) | \
                                        PIN_PUPD_PULLUP(GPIOG_PIN10) | \
                                        PIN_PUPD_PULLUP(GPIOG_PIN11) | \
                                        PIN_PUPD_PULLUP(GPIOG_PIN12) | \
                                        PIN_PUPD_PULLUP(GPIOG_PIN13) | \
                                        PIN_PUPD_PULLUP(GPIOG_PIN14) | \
                                        PIN_PUPD_PULLUP(GPIOG_PIN15))
#define VAL_GPIOG_ODR                  (PIN_OD_HIGH(GPIOG_PIN0) | \
                                        PIN_OD_HIGH(GPIOG_PIN1) | \
                                        PIN_OD_HIGH(GPIOG_PIN2) | \
                                        PIN_OD_HIGH(GPIOG_PIN3) | \
                                        PIN_OD_HIGH(GPIOG_PIN4) | \
                                        PIN_OD_HIGH(GPIOG_PIN5) | \
                                        PIN_OD_HIGH(GPIOG_PIN6) | \
                                        PIN_OD_HIGH(GPIOG_PIN7) | \
                                        PIN_OD_HIGH(GPIOG_PIN8) | \
                                        PIN_OD_HIGH(GPIOG_PIN9) | \
                                        PIN_OD_HIGH(GPIOG_PIN10) | \
                                        PIN_OD_HIGH(GPIOG_PIN11) | \
                                        PIN_OD_HIGH(GPIOG_PIN12) | \
                                        PIN_OD_HIGH(GPIOG_PIN13) | \
                                        PIN_OD_HIGH(GPIOG_PIN14) | \
                                        PIN_OD_HIGH(GPIOG_PIN15))
#define VAL_GPIOG_AFRL                 (PIN_AFIO_AF(GPIOG_PIN0, 0U) | \
                                        PIN_AFIO_AF(GPIOG_PIN1, 0U) | \
                                        PIN_AFIO_AF(GPIOG_PIN2, 0U) | \
                                        PIN_AFIO_AF(GPIOG_PIN3, 0U) | \
                                        PIN_AFIO_AF(GPIOG_PIN4, 0U) | \
                                        PIN_AFIO_AF(GPIOG_PIN5, 0U) | \
                                        PIN_AFIO_AF(GPIOG_PIN6, 0U) | \
                                        PIN_AFIO_AF(GPIOG_PIN7, 0U))
#define VAL_GPIOG_AFRH                 (PIN_AFIO_AF(GPIOG_PIN8, 0U) | \
                                        PIN_AFIO_AF(GPIOG_PIN9, 0U) | \
                                        PIN_AFIO_AF(GPIOG_PIN10, 0U) | \
                                        PIN_AFIO_AF(GPIOG_PIN11, 0U) | \
                                        PIN_AFIO_AF(GPIOG_PIN12, 0U) | \
                                        PIN_AFIO_AF(GPIOG_PIN13, 0U) | \
                                        PIN_AFIO_AF(GPIOG_PIN14, 0U) | \
                                        PIN_AFIO_AF(GPIOG_PIN15, 0U))

/*
 *  GPIOH setup:
 *
 * PH0  - PIN0                         (unused).
 * PH1  - PIN1                         (unused).
 * PH2  - PIN2                         (unused).
 * PH3  - PIN3                         (unused).
 * PH4  - PIN4                         (unused).
 * PH5  - PIN5                         (unused).
 * PH6  - PIN6                         (unused).
 * PH7  - PIN7                         (unused).
 * PH8  - PIN8                         (unused).
 * PH9  - PIN9                         (unused).
 * PH10 - PIN10                        (unused).
 * PH11 - PIN11                        (unused).
 * PH12 - PIN12                        (unused).
 * PH13 - PIN13                        (unused).
 * PH14 - PIN14                        (unused).
 * PH15 - PIN15                        (unused).
*/
#define VAL_GPIOH_MODER                (PIN_MODE_INPUT(GPIOH_PIN0) | \
                                        PIN_MODE_INPUT(GPIOH_PIN1) | \
                                        PIN_MODE_INPUT(GPIOH_PIN2) | \
                                        PIN_MODE_INPUT(GPIOH_PIN3) | \
                                        PIN_MODE_INPUT(GPIOH_PIN4) | \
                                        PIN_MODE_INPUT(GPIOH_PIN5) | \
                                        PIN_MODE_INPUT(GPIOH_PIN6) | \
                                        PIN_MODE_INPUT(GPIOH_PIN7) | \
                                        PIN_MODE_INPUT(GPIOH_PIN8) | \
                                        PIN_MODE_INPUT(GPIOH_PIN9) | \
                                        PIN_MODE_INPUT(GPIOH_PIN10) | \
                                        PIN_MODE_INPUT(GPIOH_PIN11) | \
                                        PIN_MODE_INPUT(GPIOH_PIN12) | \
                                        PIN_MODE_INPUT(GPIOH_PIN13) | \
                                        PIN_MODE_INPUT(GPIOH_PIN14) | \
                                        PIN_MODE_INPUT(GPIOH_PIN15))
#define VAL_GPIOH_OTYPER               (PIN_OTYPE_PUSHPULL(GPIOH_PIN0) | \
                                        PIN_OTYPE_PUSHPULL(GPIOH_PIN1) | \
                                        PIN_OTYPE_PUSHPULL(GPIOH_PIN2) | \
                                        PIN_OTYPE_PUSHPULL(GPIOH_PIN3) | \
                                        PIN_OTYPE_PUSHPULL(GPIOH_PIN4) | \
                                        PIN_OTYPE_PUSHPULL(GPIOH_PIN5) | \
                                        PIN_OTYPE_PUSHPULL(GPIOH_PIN6) | \
                                        PIN_OTYPE_PUSHPULL(GPIOH_PIN7) | \
                                        PIN_OTYPE_PUSHPULL(GPIOH_PIN8) | \
                                        PIN_OTYPE_PUSHPULL(GPIOH_PIN9) | \
                                        PIN_OTYPE_PUSHPULL(GPIOH_PIN10) | \
                                        PIN_OTYPE_PUSHPULL(GPIOH_PIN11) | \
                                        PIN_OTYPE_PUSHPULL(GPIOH_PIN12) | \
                                        PIN_OTYPE_PUSHPULL(GPIOH_PIN13) | \
                                        PIN_OTYPE_PUSHPULL(GPIOH_PIN14) | \
                                        PIN_OTYPE_PUSHPULL(GPIOH_PIN15))
#define VAL_GPIOH_OSPEEDR              (PIN_OSPEED_VERYLOW(GPIOH_PIN0) | \
                                        PIN_OSPEED_VERYLOW(GPIOH_PIN1) | \
                                        PIN_OSPEED_VERYLOW(GPIOH_PIN2) | \
                                        PIN_OSPEED_VERYLOW(GPIOH_PIN3) | \
                                        PIN_OSPEED_VERYLOW(GPIOH_PIN4) | \
                                        PIN_OSPEED_VERYLOW(GPIOH_PIN5) | \
                                        PIN_OSPEED_VERYLOW(GPIOH_PIN6) | \
                                        PIN_OSPEED_VERYLOW(GPIOH_PIN7) | \
                                        PIN_OSPEED_VERYLOW(GPIOH_PIN8) | \
                                        PIN_OSPEED_VERYLOW(GPIOH_PIN9) | \
                                        PIN_OSPEED_VERYLOW(GPIOH_PIN10) | \
                                        PIN_OSPEED_VERYLOW(GPIOH_PIN11) | \
                                        PIN_OSPEED_VERYLOW(GPIOH_PIN12) | \
                                        PIN_OSPEED_VERYLOW(GPIOH_PIN13) | \
                                        PIN_OSPEED_VERYLOW(GPIOH_PIN14) | \
                                        PIN_OSPEED_VERYLOW(GPIOH_PIN15))
#define VAL_GPIOH_PUPDR                (PIN_PUPD_PULLUP(GPIOH_PIN0) | \
                                        PIN_PUPD_PULLUP(GPIOH_PIN1) | \
                                        PIN_PUPD_PULLUP(GPIOH_PIN2) | \
                                        PIN_PUPD_PULLUP(GPIOH_PIN3) | \
                                        PIN_PUPD_PULLUP(GPIOH_PIN4) | \
                                        PIN_PUPD_PULLUP(GPIOH_PIN5) | \
                                        PIN_PUPD_PULLUP(GPIOH_PIN6) | \
                                        PIN_PUPD_PULLUP(GPIOH_PIN7) | \
                                        PIN_PUPD_PULLUP(GPIOH_PIN8) | \
                                        PIN_PUPD_PULLUP(GPIOH_PIN9) | \
                                        PIN_PUPD_PULLUP(GPIOH_PIN10) | \
                                        PIN_PUPD_PULLUP(GPIOH_PIN11) | \
                                        PIN_PUPD_PULLUP(GPIOH_PIN12) | \
                                        PIN_PUPD_PULLUP(GPIOH_PIN13) | \
                                        PIN_PUPD_PULLUP(GPIOH_PIN14) | \
                                        PIN_PUPD_PULLUP(GPIOH_PIN15))
#define VAL_GPIOH_ODR                  (PIN_OD_HIGH(GPIOH_PIN0) | \
                                        PIN_OD_HIGH(GPIOH_PIN1) | \
                                        PIN_OD_HIGH(GPIOH_PIN2) | \
                                        PIN_OD_HIGH(GPIOH_PIN3) | \
                                        PIN_OD_HIGH(GPIOH_PIN4) | \
                                        PIN_OD_HIGH(GPIOH_PIN5) | \
                                        PIN_OD_HIGH(GPIOH_PIN6) | \
                                        PIN_OD_HIGH(GPIOH_PIN7) | \
                                        PIN_OD_HIGH(GPIOH_PIN8) | \
                                        PIN_OD_HIGH(GPIOH_PIN9) | \
                                        PIN_OD_HIGH(GPIOH_PIN10) | \
                                        PIN_OD_HIGH(GPIOH_PIN11) | \
                                        PIN_OD_HIGH(GPIOH_PIN12) | \
                                        PIN_OD_HIGH(GPIOH_PIN13) | \
                                        PIN_OD_HIGH(GPIOH_PIN14) | \
                                        PIN_OD_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_AFRL                 (PIN_AFIO_AF(GPIOH_PIN0, 0U) | \
                                        PIN_AFIO_AF(GPIOH_PIN1, 0U) | \
                                        PIN_AFIO_AF(GPIOH_PIN2, 0U) | \
                                        PIN_AFIO_AF(GPIOH_PIN3, 0U) | \
                                        PIN_AFIO_AF(GPIOH_PIN4, 0U) | \
                                        PIN_AFIO_AF(GPIOH_PIN5, 0U) | \
                                        PIN_AFIO_AF(GPIOH_PIN6, 0U) | \
                                        PIN_AFIO_AF(GPIOH_PIN7, 0U))
#define VAL_GPIOH_AFRH                 (PIN_AFIO_AF(GPIOH_PIN8, 0U) | \
                                        PIN_AFIO_AF(GPIOH_PIN9, 0U) | \
                                        PIN_AFIO_AF(GPIOH_PIN10, 0U) | \
                                        PIN_AFIO_AF(GPIOH_PIN11, 0U) | \
                                        PIN_AFIO_AF(GPIOH_PIN12, 0U) | \
                                        PIN_AFIO_AF(GPIOH_PIN13, 0U) | \
                                        PIN_AFIO_AF(GPIOH_PIN14, 0U) | \
                                        PIN_AFIO_AF(GPIOH_PIN15, 0U))

/*
 *  GPIOI setup:
 *
 * PI0  - PIN0                         (unused).
 * PI1  - PIN1                         (unused).
 * PI2  - PIN2                         (unused).
 * PI3  - PIN3                         (unused).
 * PI4  - PIN4                         (unused).
 * PI5  - PIN5                         (unused).
 * PI6  - PIN6                         (unused).
 * PI7  - PIN7                         (unused).
 * PI8  - PIN8                         (unused).
 * PI9  - PIN9                         (unused).
 * PI10 - PIN10                        (unused).
 * PI11 - PIN11                        (unused).
 * PI12 - PIN12                        (unused).
 * PI13 - PIN13                        (unused).
 * PI14 - PIN14                        (unused).
 * PI15 - PIN15                        (unused).
*/
#define VAL_GPIOI_MODER                (PIN_MODE_INPUT(GPIOI_PIN0) | \
                                        PIN_MODE_INPUT(GPIOI_PIN1) | \
                                        PIN_MODE_INPUT(GPIOI_PIN2) | \
                                        PIN_MODE_INPUT(GPIOI_PIN3) | \
                                        PIN_MODE_INPUT(GPIOI_PIN4) | \
                                        PIN_MODE_INPUT(GPIOI_PIN5) | \
                                        PIN_MODE_INPUT(GPIOI_PIN6) | \
                                        PIN_MODE_INPUT(GPIOI_PIN7) | \
                                        PIN_MODE_INPUT(GPIOI_PIN8) | \
                                        PIN_MODE_INPUT(GPIOI_PIN9) | \
                                        PIN_MODE_INPUT(GPIOI_PIN10) | \
                                        PIN_MODE_INPUT(GPIOI_PIN11) | \
                                        PIN_MODE_INPUT(GPIOI_PIN12) | \
                                        PIN_MODE_INPUT(GPIOI_PIN13) | \
                                        PIN_MODE_INPUT(GPIOI_PIN14) | \
                                        PIN_MODE_INPUT(GPIOI_PIN15))
#define VAL_GPIOI_OTYPER               (PIN_OTYPE_PUSHPULL(GPIOI_PIN0) | \
                                        PIN_OTYPE_PUSHPULL(GPIOI_PIN1) | \
                                        PIN_OTYPE_PUSHPULL(GPIOI_PIN2) | \
                                        PIN_OTYPE_PUSHPULL(GPIOI_PIN3) | \
                                        PIN_OTYPE_PUSHPULL(GPIOI_PIN4) | \
                                        PIN_OTYPE_PUSHPULL(GPIOI_PIN5) | \
                                        PIN_OTYPE_PUSHPULL(GPIOI_PIN6) | \
                                        PIN_OTYPE_PUSHPULL(GPIOI_PIN7) | \
                                        PIN_OTYPE_PUSHPULL(GPIOI_PIN8) | \
                                        PIN_OTYPE_PUSHPULL(GPIOI_PIN9) | \
                                        PIN_OTYPE_PUSHPULL(GPIOI_PIN10) | \
                                        PIN_OTYPE_PUSHPULL(GPIOI_PIN11) | \
                                        PIN_OTYPE_PUSHPULL(GPIOI_PIN12) | \
                                        PIN_OTYPE_PUSHPULL(GPIOI_PIN13) | \
                                        PIN_OTYPE_PUSHPULL(GPIOI_PIN14) | \
                                        PIN_OTYPE_PUSHPULL(GPIOI_PIN15))
#define VAL_GPIOI_OSPEEDR              (PIN_OSPEED_VERYLOW(GPIOI_PIN0) | \
                                        PIN_OSPEED_VERYLOW(GPIOI_PIN1) | \
                                        PIN_OSPEED_VERYLOW(GPIOI_PIN2) | \
                                        PIN_OSPEED_VERYLOW(GPIOI_PIN3) | \
                                        PIN_OSPEED_VERYLOW(GPIOI_PIN4) | \
                                        PIN_OSPEED_VERYLOW(GPIOI_PIN5) | \
                                        PIN_OSPEED_VERYLOW(GPIOI_PIN6) | \
                                        PIN_OSPEED_VERYLOW(GPIOI_PIN7) | \
                                        PIN_OSPEED_VERYLOW(GPIOI_PIN8) | \
                                        PIN_OSPEED_VERYLOW(GPIOI_PIN9) | \
                                        PIN_OSPEED_VERYLOW(GPIOI_PIN10) | \
                                        PIN_OSPEED_VERYLOW(GPIOI_PIN11) | \
                                        PIN_OSPEED_VERYLOW(GPIOI_PIN12) | \
                                        PIN_OSPEED_VERYLOW(GPIOI_PIN13) | \
                                        PIN_OSPEED_VERYLOW(GPIOI_PIN14) | \
                                        PIN_OSPEED_VERYLOW(GPIOI_PIN15))
#define VAL_GPIOI_PUPDR                (PIN_PUPD_PULLUP(GPIOI_PIN0) | \
                                        PIN_PUPD_PULLUP(GPIOI_PIN1) | \
                                        PIN_PUPD_PULLUP(GPIOI_PIN2) | \
                                        PIN_PUPD_PULLUP(GPIOI_PIN3) | \
                                        PIN_PUPD_PULLUP(GPIOI_PIN4) | \
                                        PIN_PUPD_PULLUP(GPIOI_PIN5) | \
                                        PIN_PUPD_PULLUP(GPIOI_PIN6) | \
                                        PIN_PUPD_PULLUP(GPIOI_PIN7) | \
                                        PIN_PUPD_PULLUP(GPIOI_PIN8) | \
                                        PIN_PUPD_PULLUP(GPIOI_PIN9) | \
                                        PIN_PUPD_PULLUP(GPIOI_PIN10) | \
                                        PIN_PUPD_PULLUP(GPIOI_PIN11) | \
                                        PIN_PUPD_PULLUP(GPIOI_PIN12) | \
                                        PIN_PUPD_PULLUP(GPIOI_PIN13) | \
                                        PIN_PUPD_PULLUP(GPIOI_PIN14) | \
                                        PIN_PUPD_PULLUP(GPIOI_PIN15))
#define VAL_GPIOI_ODR                  (PIN_OD_HIGH(GPIOI_PIN0) | \
                                        PIN_OD_HIGH(GPIOI_PIN1) | \
                                        PIN_OD_HIGH(GPIOI_PIN2) | \
                                        PIN_OD_HIGH(GPIOI_PIN3) | \
                                        PIN_OD_HIGH(GPIOI_PIN4) | \
                                        PIN_OD_HIGH(GPIOI_PIN5) | \
                                        PIN_OD_HIGH(GPIOI_PIN6) | \
                                        PIN_OD_HIGH(GPIOI_PIN7) | \
                                        PIN_OD_HIGH(GPIOI_PIN8) | \
                                        PIN_OD_HIGH(GPIOI_PIN9) | \
                                        PIN_OD_HIGH(GPIOI_PIN10) | \
                                        PIN_OD_HIGH(GPIOI_PIN11) | \
                                        PIN_OD_HIGH(GPIOI_PIN12) | \
                                        PIN_OD_HIGH(GPIOI_PIN13) | \
                                        PIN_OD_HIGH(GPIOI_PIN14) | \
                                        PIN_OD_HIGH(GPIOI_PIN15))
#define VAL_GPIOI_AFRL                 (PIN_AFIO_AF(GPIOI_PIN0, 0U) | \
                                        PIN_AFIO_AF(GPIOI_PIN1, 0U) | \
                                        PIN_AFIO_AF(GPIOI_PIN2, 0U) | \
                                        PIN_AFIO_AF(GPIOI_PIN3, 0U) | \
                                        PIN_AFIO_AF(GPIOI_PIN4, 0U) | \
                                        PIN_AFIO_AF(GPIOI_PIN5, 0U) | \
                                        PIN_AFIO_AF(GPIOI_PIN6, 0U) | \
                                        PIN_AFIO_AF(GPIOI_PIN7, 0U))
#define VAL_GPIOI_AFRH                 (PIN_AFIO_AF(GPIOI_PIN8, 0U) | \
                                        PIN_AFIO_AF(GPIOI_PIN9, 0U) | \
                                        PIN_AFIO_AF(GPIOI_PIN10, 0U) | \
                                        PIN_AFIO_AF(GPIOI_PIN11, 0U) | \
                                        PIN_AFIO_AF(GPIOI_PIN12, 0U) | \
                                        PIN_AFIO_AF(GPIOI_PIN13, 0U) | \
                                        PIN_AFIO_AF(GPIOI_PIN14, 0U) | \
                                        PIN_AFIO_AF(GPIOI_PIN15, 0U))

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */

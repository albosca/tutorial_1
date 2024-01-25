/**
 ******************************************************************************
 * @file           : port_led.h
 * @brief          : Header for port_led.c file.
 ******************************************************************************
 * @attention
 *
 * Román Cárdenas Rodríguez (r.cardenas@upm.es)
 * Sistemas Digitales II
 *
 ******************************************************************************
 */

#ifndef PORT_LED_H_
#define PORT_LED_H_

#include <stdbool.h>

/**
 * @brief configures the GPIO pin of the LED.
 *
 * > **TO-DO alumnos:**
 * >
 * > ✅ 1. Enable GPIOA clock in AHB1ENR \n
 * > ✅ 2. Clean previous configuration for pin 5 in MODER and PUPDR \n
 * > ✅ 2. Set pin 5 mode as output in MODER \n
 * > ✅ 3. Set pull up/down configuration as no PUPD for pin 5 in PUPDR
 *
 */
void port_led_gpio_setup(void);

/**
 * @brief  Gets the current state of the LED.
 * @retval true if the LED is on, false otherwise
*/
bool port_led_get(void);

/**
 * @brief  Sets the LED state.
 * @param  state: true to turn the LED on, false to turn it off
 */
void port_led_on(void);

/**
 * @brief  Sets the LED state.
 * @param  state: true to turn the LED on, false to turn it off
 */
void port_led_off(void);

/**
 * @brief toggles the LED
 *
 * > **TO-DO alumnos:**
 * >
 * > ✅ 1. Read current LED value in IDR register \n
 * > ✅ 2. Depending on its current value, set LED's new value in ODR register
 *
 */
void port_led_toggle(void);

#endif // PORT_LED_H_

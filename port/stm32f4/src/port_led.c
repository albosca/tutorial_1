#include <stdio.h>
#include "port_led.h"
#include "port_system.h"

/* HW dependent includes */
#include "stm32f4xx.h"


// HW Nucleo-STM32F446RE:


#define LD2_PIN 5
#define LD2_GPIO_PORT GPIOA

#define MODER5_MASK (GPIO_MODER_MODE0 << LD2_PIN * 2) /* Cada pin ocupa 2 bits */
#define PUPDR5_MASK (GPIO_PUPDR_PUPD0 << LD2_PIN * 2) /* Cada pin ocupa 2 bits */

#define MODER5_AS_OUTPUT (GPIO_MODE_OUT << LD2_PIN * 2) /* Cada pin ocupa 2 bits */
#define PUPDR5_AS_NOPUPD (GPIO_PUPDR_NOPULL << LD2_PIN * 2) /* Cada pin ocupa 2 bits */

#define IDR5_MASK (GPIO_IDR_ID0 << LD2_PIN) /* Cada pin ocupa 1 bit */
#define ODR5_MASK (GPIO_ODR_OD0 << LD2_PIN) /* Cada pin ocupa 1 bit */
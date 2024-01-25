#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include "port_system.h"
#include "port_led.h"
#include <fsm.h>

#define BLINK_T_MS 2000

/**
 * @brief main routine
 *
 *  * > **TO-DO alumnos:**
 * >
 * > ✅ 1. Initialize the system \n
 * > ✅ 2. Initialize the LED GPIO \n
 * > ✅ 3. Infinite loop that toggles the LED value. The toggling period must be T_LED_MS \n
 * > ✅ 4. Even thought it never returns, it is good practice to return 0 at the end of the function.
 *
 * @return this function never returns.
 */

int main()
{
    // port_system_init();    // inicializamos el sistema
    // port_led_gpio_setup(); // Configuramos el GPIO para el LED

    // uint32_t t = port_system_get_millis(); // en t llevamos cuenta del tiempo actual
    // while (1)
    // {
    //     port_led_toggle();                              // Hacemos parpadear el LED
    //     port_system_delay_until_ms(&t, BLINK_T_MS / 2); // Y esperamos el periodo de la FSM
    // }
    return 0;
}

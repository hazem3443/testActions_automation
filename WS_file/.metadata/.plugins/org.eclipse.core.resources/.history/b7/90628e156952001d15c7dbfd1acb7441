/*
 * Led.h
 *
 *  Created on: Oct 22, 2022
 *      Author: hazem
 */

#ifndef SRC_LED_H_
#define SRC_LED_H_

#include <stdint.h>
#include <stdbool.h>

#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"


#define LEDGreen GPIO_PIN_3

enum {
    MAX_LED = 5
};

/* Turn on the LED*/
uint32_t Led_on(uint8_t index);

/* Turn off the LED*/
void Led_off(uint8_t index);

#endif /* SRC_LED_H_ */

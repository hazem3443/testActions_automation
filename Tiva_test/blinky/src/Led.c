/*
 * Led.c
 *
 *  Created on: Oct 22, 2022
 *      Author: hazem
 */

#include "Led.h"


/* Turn on the LED*/
uint32_t Led_on(uint8_t index){
    GPIOPinWrite(GPIO_PORTF_BASE, index, index);
    return index*5;
}

/* Turn off the LED*/
void Led_off(uint8_t index){
    GPIOPinWrite(GPIO_PORTF_BASE, index, 0x0);
}

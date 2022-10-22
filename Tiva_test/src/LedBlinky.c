/*
 * LedBlinky.c
 *
 *  Created on: Oct 22, 2022
 *      Author: hazem
 */
#include "LedBlinky.h"
#include "Led.h"

uint32_t LedSetTimes_toBlink(uint8_t const timesToBlink){

    for(uint8_t i=0;;i<timesToBlink;i++){
        Led_on(GPIO_PIN_3);
        SysCtlDelay(16000000u / 3u);
        Led_off(GPIO_PIN_3);
        SysCtlDelay(16000000u / 3u);
    }
}




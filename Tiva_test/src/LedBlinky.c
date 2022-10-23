/*
 * LedBlinky.c
 *
 *  Created on: Oct 22, 2022
 *      Author: hazem
 */
#include "LedBlinky.h"
#include "Led.h"

uint32_t LedSetTimes_toBlink(uint8_t const timesToBlink){
    uint_fast8_t i;
    uint32_t ret = 0;

    for(i=0;i<timesToBlink;i++){
        ret += Led_on(LEDGreen);
        SysCtlDelay(16000000u / 3u);
        Led_off(LEDGreen);
        SysCtlDelay(16000000u / 3u);
    }

    return ret;
}




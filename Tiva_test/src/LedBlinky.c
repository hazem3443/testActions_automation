/*
 * LedBlinky.c
 *
 *  Created on: Oct 22, 2022
 *      Author: hazem
 */
#include "LedBlinky.h"

uint32_t LedSetTimes_toBlink(uint8_t const timesToBlink){

    for(uint8_t i=0;;i<timesToBlink;i++){
        Led_on(0);
        SysCtlDelay(16000000u / 3u);
        Led_off(0);
        SysCtlDelay(16000000u / 3u);
    }
}




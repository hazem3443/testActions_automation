#include "src/LedBlinky.h"
#include "build/test/mocks/mock_sysctl.h"
#include "build/test/mocks/mock_Led.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"










void setUp(void)

{

}



void tearDown(void)

{

}



void test_LedBlinky_normal(void)

{

    UnityAssertEqualNumber((UNITY_INT)((40)), (UNITY_INT)((40)), (

   ((void *)0)

   ), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_INT);

}



void test_LedBlinky_LEDsCount(void)

{



    int timesToBlink = 1;

    int res1 = 0;

    for (size_t i = 0; i < timesToBlink; i++)

    {

        res1 += 5*0x00000008;

        Led_on_CMockExpectAndReturn(31, 0x00000008, 5*0x00000008);

        SysCtlDelay_CMockExpect(32, 16000000u / 3u);

        Led_off_CMockExpect(33, 0x00000008);

        SysCtlDelay_CMockExpect(34, 16000000u / 3u);

    }



    int res = LedSetTimes_toBlink(timesToBlink);

    UnityAssertEqualNumber((UNITY_INT)((res1)), (UNITY_INT)((res)), (

   ((void *)0)

   ), (UNITY_UINT)(38), UNITY_DISPLAY_STYLE_INT);

}

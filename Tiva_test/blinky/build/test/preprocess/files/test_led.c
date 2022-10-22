#include "build/test/mocks/mock_Led.h"
#include "build/test/mocks/mock_gpio.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








void setUp(void)

{

}



void tearDown(void)

{

}



void test_led_Off(void)

{

    Led_off_CMockExpect(18, 1);

    Led_off(1);



}



void test_led_On(void)

{

    Led_on_CMockExpectAndReturn(25, 1, 5);

    int res = Led_on(1);



    UnityAssertEqualNumber((UNITY_INT)((res)), (UNITY_INT)((5)), (

   ((void *)0)

   ), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

}

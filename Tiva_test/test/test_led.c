#ifdef TEST

#include "unity.h"

#include "mock_gpio.h"
#include "mock_Led.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_led_Off(void)
{
    Led_off_Expect(1);
    Led_off(1);

}

void test_led_On(void)
{
    Led_on_ExpectAndReturn(1,5);
    int res = Led_on(1);

    TEST_ASSERT_EQUAL(res,5);
}
#endif // TEST

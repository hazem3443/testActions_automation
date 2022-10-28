#ifdef TEST

#include "unity.h"

#include "mock_Led.h"
#include "mock_sysctl.h"

#include "LedBlinky.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_LedBlinky_normal(void)
{
    TEST_ASSERT_EQUAL(40,40);    
}

void test_LedBlinky_LEDsCount(void)
{
    // TEST_IGNORE_MESSAGE("Need to Implement LedBlinky");
    int timesToBlink = 1;
    int res1 = 0;
    for (size_t i = 0; i < timesToBlink; i++)
    {
        res1 += 5*LEDGreen;
        Led_on_ExpectAndReturn(LEDGreen, 5*LEDGreen);
        SysCtlDelay_Expect(16000000u / 3u);
        Led_off_Expect(1);
        SysCtlDelay_Expect(16000000u / 3u);
    }
    
    int res = LedSetTimes_toBlink(timesToBlink);
    TEST_ASSERT_EQUAL(res1,res);    
}
#endif // TEST

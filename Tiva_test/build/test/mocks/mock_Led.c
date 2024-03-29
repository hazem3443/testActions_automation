/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_Led.h"

static const char* CMockString_Led_off = "Led_off";
static const char* CMockString_Led_on = "Led_on";
static const char* CMockString_index = "index";

typedef struct _CMOCK_Led_on_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  uint32_t ReturnVal;
  int CallOrder;
  uint8_t Expected_index;

} CMOCK_Led_on_CALL_INSTANCE;

typedef struct _CMOCK_Led_off_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  uint8_t Expected_index;

} CMOCK_Led_off_CALL_INSTANCE;

static struct mock_LedInstance
{
  char Led_on_IgnoreBool;
  uint32_t Led_on_FinalReturn;
  char Led_on_CallbackBool;
  CMOCK_Led_on_CALLBACK Led_on_CallbackFunctionPointer;
  int Led_on_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE Led_on_CallInstance;
  char Led_off_IgnoreBool;
  char Led_off_CallbackBool;
  CMOCK_Led_off_CALLBACK Led_off_CallbackFunctionPointer;
  int Led_off_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE Led_off_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_Led_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.Led_on_CallInstance;
  if (Mock.Led_on_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_Led_on);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.Led_on_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.Led_off_CallInstance;
  if (Mock.Led_off_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_Led_off);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.Led_off_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_Led_Init(void)
{
  mock_Led_Destroy();
}

void mock_Led_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

uint32_t Led_on(uint8_t index)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Led_on_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_Led_on);
  cmock_call_instance = (CMOCK_Led_on_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Led_on_CallInstance);
  Mock.Led_on_CallInstance = CMock_Guts_MemNext(Mock.Led_on_CallInstance);
  if (Mock.Led_on_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.Led_on_FinalReturn;
    Mock.Led_on_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.Led_on_CallbackBool &&
      Mock.Led_on_CallbackFunctionPointer != NULL)
  {
    uint32_t cmock_cb_ret = Mock.Led_on_CallbackFunctionPointer(index, Mock.Led_on_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_Led_on,CMockString_index);
    UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_index, index, cmock_line, CMockStringMismatch);
  }
  if (Mock.Led_on_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.Led_on_CallbackFunctionPointer(index, Mock.Led_on_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_Led_on(CMOCK_Led_on_CALL_INSTANCE* cmock_call_instance, uint8_t index);
void CMockExpectParameters_Led_on(CMOCK_Led_on_CALL_INSTANCE* cmock_call_instance, uint8_t index)
{
  cmock_call_instance->Expected_index = index;
}

void Led_on_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Led_on_CALL_INSTANCE));
  CMOCK_Led_on_CALL_INSTANCE* cmock_call_instance = (CMOCK_Led_on_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Led_on_CallInstance = CMock_Guts_MemChain(Mock.Led_on_CallInstance, cmock_guts_index);
  Mock.Led_on_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.Led_on_IgnoreBool = (char)1;
}

void Led_on_CMockStopIgnore(void)
{
  if(Mock.Led_on_IgnoreBool)
    Mock.Led_on_CallInstance = CMock_Guts_MemNext(Mock.Led_on_CallInstance);
  Mock.Led_on_IgnoreBool = (char)0;
}

void Led_on_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t index, uint32_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Led_on_CALL_INSTANCE));
  CMOCK_Led_on_CALL_INSTANCE* cmock_call_instance = (CMOCK_Led_on_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Led_on_CallInstance = CMock_Guts_MemChain(Mock.Led_on_CallInstance, cmock_guts_index);
  Mock.Led_on_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_Led_on(cmock_call_instance, index);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void Led_on_AddCallback(CMOCK_Led_on_CALLBACK Callback)
{
  Mock.Led_on_IgnoreBool = (char)0;
  Mock.Led_on_CallbackBool = (char)1;
  Mock.Led_on_CallbackFunctionPointer = Callback;
}

void Led_on_Stub(CMOCK_Led_on_CALLBACK Callback)
{
  Mock.Led_on_IgnoreBool = (char)0;
  Mock.Led_on_CallbackBool = (char)0;
  Mock.Led_on_CallbackFunctionPointer = Callback;
}

void Led_off(uint8_t index)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Led_off_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_Led_off);
  cmock_call_instance = (CMOCK_Led_off_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Led_off_CallInstance);
  Mock.Led_off_CallInstance = CMock_Guts_MemNext(Mock.Led_off_CallInstance);
  if (Mock.Led_off_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.Led_off_CallbackBool &&
      Mock.Led_off_CallbackFunctionPointer != NULL)
  {
    Mock.Led_off_CallbackFunctionPointer(index, Mock.Led_off_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_Led_off,CMockString_index);
    UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_index, index, cmock_line, CMockStringMismatch);
  }
  if (Mock.Led_off_CallbackFunctionPointer != NULL)
  {
    Mock.Led_off_CallbackFunctionPointer(index, Mock.Led_off_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_Led_off(CMOCK_Led_off_CALL_INSTANCE* cmock_call_instance, uint8_t index);
void CMockExpectParameters_Led_off(CMOCK_Led_off_CALL_INSTANCE* cmock_call_instance, uint8_t index)
{
  cmock_call_instance->Expected_index = index;
}

void Led_off_CMockIgnore(void)
{
  Mock.Led_off_IgnoreBool = (char)1;
}

void Led_off_CMockStopIgnore(void)
{
  Mock.Led_off_IgnoreBool = (char)0;
}

void Led_off_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t index)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Led_off_CALL_INSTANCE));
  CMOCK_Led_off_CALL_INSTANCE* cmock_call_instance = (CMOCK_Led_off_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Led_off_CallInstance = CMock_Guts_MemChain(Mock.Led_off_CallInstance, cmock_guts_index);
  Mock.Led_off_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_Led_off(cmock_call_instance, index);
}

void Led_off_AddCallback(CMOCK_Led_off_CALLBACK Callback)
{
  Mock.Led_off_IgnoreBool = (char)0;
  Mock.Led_off_CallbackBool = (char)1;
  Mock.Led_off_CallbackFunctionPointer = Callback;
}

void Led_off_Stub(CMOCK_Led_off_CALLBACK Callback)
{
  Mock.Led_off_IgnoreBool = (char)0;
  Mock.Led_off_CallbackBool = (char)0;
  Mock.Led_off_CallbackFunctionPointer = Callback;
}


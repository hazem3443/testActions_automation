/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_GPIO_H
#define _MOCK_GPIO_H

#include "unity.h"
#include <stdbool.h>
#include <stdint.h>
#include "gpio.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_gpio_Init(void);
void mock_gpio_Destroy(void);
void mock_gpio_Verify(void);


typedef void(*cmock_gpio_func_ptr1)(void);
typedef void(*cmock_gpio_func_ptr2)(void);


#define GPIODirModeSet_Ignore() GPIODirModeSet_CMockIgnore()
void GPIODirModeSet_CMockIgnore(void);
#define GPIODirModeSet_StopIgnore() GPIODirModeSet_CMockStopIgnore()
void GPIODirModeSet_CMockStopIgnore(void);
#define GPIODirModeSet_Expect(ui32Port, ui8Pins, ui32PinIO) GPIODirModeSet_CMockExpect(__LINE__, ui32Port, ui8Pins, ui32PinIO)
void GPIODirModeSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins, uint32_t ui32PinIO);
typedef void (* CMOCK_GPIODirModeSet_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, uint32_t ui32PinIO, int cmock_num_calls);
void GPIODirModeSet_AddCallback(CMOCK_GPIODirModeSet_CALLBACK Callback);
void GPIODirModeSet_Stub(CMOCK_GPIODirModeSet_CALLBACK Callback);
#define GPIODirModeSet_StubWithCallback GPIODirModeSet_Stub
#define GPIODirModeGet_IgnoreAndReturn(cmock_retval) GPIODirModeGet_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void GPIODirModeGet_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define GPIODirModeGet_StopIgnore() GPIODirModeGet_CMockStopIgnore()
void GPIODirModeGet_CMockStopIgnore(void);
#define GPIODirModeGet_ExpectAndReturn(ui32Port, ui8Pin, cmock_retval) GPIODirModeGet_CMockExpectAndReturn(__LINE__, ui32Port, ui8Pin, cmock_retval)
void GPIODirModeGet_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pin, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_GPIODirModeGet_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pin, int cmock_num_calls);
void GPIODirModeGet_AddCallback(CMOCK_GPIODirModeGet_CALLBACK Callback);
void GPIODirModeGet_Stub(CMOCK_GPIODirModeGet_CALLBACK Callback);
#define GPIODirModeGet_StubWithCallback GPIODirModeGet_Stub
#define GPIOIntTypeSet_Ignore() GPIOIntTypeSet_CMockIgnore()
void GPIOIntTypeSet_CMockIgnore(void);
#define GPIOIntTypeSet_StopIgnore() GPIOIntTypeSet_CMockStopIgnore()
void GPIOIntTypeSet_CMockStopIgnore(void);
#define GPIOIntTypeSet_Expect(ui32Port, ui8Pins, ui32IntType) GPIOIntTypeSet_CMockExpect(__LINE__, ui32Port, ui8Pins, ui32IntType)
void GPIOIntTypeSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins, uint32_t ui32IntType);
typedef void (* CMOCK_GPIOIntTypeSet_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, uint32_t ui32IntType, int cmock_num_calls);
void GPIOIntTypeSet_AddCallback(CMOCK_GPIOIntTypeSet_CALLBACK Callback);
void GPIOIntTypeSet_Stub(CMOCK_GPIOIntTypeSet_CALLBACK Callback);
#define GPIOIntTypeSet_StubWithCallback GPIOIntTypeSet_Stub
#define GPIOIntTypeGet_IgnoreAndReturn(cmock_retval) GPIOIntTypeGet_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void GPIOIntTypeGet_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define GPIOIntTypeGet_StopIgnore() GPIOIntTypeGet_CMockStopIgnore()
void GPIOIntTypeGet_CMockStopIgnore(void);
#define GPIOIntTypeGet_ExpectAndReturn(ui32Port, ui8Pin, cmock_retval) GPIOIntTypeGet_CMockExpectAndReturn(__LINE__, ui32Port, ui8Pin, cmock_retval)
void GPIOIntTypeGet_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pin, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_GPIOIntTypeGet_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pin, int cmock_num_calls);
void GPIOIntTypeGet_AddCallback(CMOCK_GPIOIntTypeGet_CALLBACK Callback);
void GPIOIntTypeGet_Stub(CMOCK_GPIOIntTypeGet_CALLBACK Callback);
#define GPIOIntTypeGet_StubWithCallback GPIOIntTypeGet_Stub
#define GPIOPadConfigSet_Ignore() GPIOPadConfigSet_CMockIgnore()
void GPIOPadConfigSet_CMockIgnore(void);
#define GPIOPadConfigSet_StopIgnore() GPIOPadConfigSet_CMockStopIgnore()
void GPIOPadConfigSet_CMockStopIgnore(void);
#define GPIOPadConfigSet_Expect(ui32Port, ui8Pins, ui32Strength, ui32PadType) GPIOPadConfigSet_CMockExpect(__LINE__, ui32Port, ui8Pins, ui32Strength, ui32PadType)
void GPIOPadConfigSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins, uint32_t ui32Strength, uint32_t ui32PadType);
typedef void (* CMOCK_GPIOPadConfigSet_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, uint32_t ui32Strength, uint32_t ui32PadType, int cmock_num_calls);
void GPIOPadConfigSet_AddCallback(CMOCK_GPIOPadConfigSet_CALLBACK Callback);
void GPIOPadConfigSet_Stub(CMOCK_GPIOPadConfigSet_CALLBACK Callback);
#define GPIOPadConfigSet_StubWithCallback GPIOPadConfigSet_Stub
#define GPIOPadConfigGet_Ignore() GPIOPadConfigGet_CMockIgnore()
void GPIOPadConfigGet_CMockIgnore(void);
#define GPIOPadConfigGet_StopIgnore() GPIOPadConfigGet_CMockStopIgnore()
void GPIOPadConfigGet_CMockStopIgnore(void);
#define GPIOPadConfigGet_Expect(ui32Port, ui8Pin, pui32Strength, pui32PadType) GPIOPadConfigGet_CMockExpect(__LINE__, ui32Port, ui8Pin, pui32Strength, pui32PadType)
void GPIOPadConfigGet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pin, uint32_t* pui32Strength, uint32_t* pui32PadType);
typedef void (* CMOCK_GPIOPadConfigGet_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pin, uint32_t* pui32Strength, uint32_t* pui32PadType, int cmock_num_calls);
void GPIOPadConfigGet_AddCallback(CMOCK_GPIOPadConfigGet_CALLBACK Callback);
void GPIOPadConfigGet_Stub(CMOCK_GPIOPadConfigGet_CALLBACK Callback);
#define GPIOPadConfigGet_StubWithCallback GPIOPadConfigGet_Stub
#define GPIOIntEnable_Ignore() GPIOIntEnable_CMockIgnore()
void GPIOIntEnable_CMockIgnore(void);
#define GPIOIntEnable_StopIgnore() GPIOIntEnable_CMockStopIgnore()
void GPIOIntEnable_CMockStopIgnore(void);
#define GPIOIntEnable_Expect(ui32Port, ui32IntFlags) GPIOIntEnable_CMockExpect(__LINE__, ui32Port, ui32IntFlags)
void GPIOIntEnable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint32_t ui32IntFlags);
typedef void (* CMOCK_GPIOIntEnable_CALLBACK)(uint32_t ui32Port, uint32_t ui32IntFlags, int cmock_num_calls);
void GPIOIntEnable_AddCallback(CMOCK_GPIOIntEnable_CALLBACK Callback);
void GPIOIntEnable_Stub(CMOCK_GPIOIntEnable_CALLBACK Callback);
#define GPIOIntEnable_StubWithCallback GPIOIntEnable_Stub
#define GPIOIntDisable_Ignore() GPIOIntDisable_CMockIgnore()
void GPIOIntDisable_CMockIgnore(void);
#define GPIOIntDisable_StopIgnore() GPIOIntDisable_CMockStopIgnore()
void GPIOIntDisable_CMockStopIgnore(void);
#define GPIOIntDisable_Expect(ui32Port, ui32IntFlags) GPIOIntDisable_CMockExpect(__LINE__, ui32Port, ui32IntFlags)
void GPIOIntDisable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint32_t ui32IntFlags);
typedef void (* CMOCK_GPIOIntDisable_CALLBACK)(uint32_t ui32Port, uint32_t ui32IntFlags, int cmock_num_calls);
void GPIOIntDisable_AddCallback(CMOCK_GPIOIntDisable_CALLBACK Callback);
void GPIOIntDisable_Stub(CMOCK_GPIOIntDisable_CALLBACK Callback);
#define GPIOIntDisable_StubWithCallback GPIOIntDisable_Stub
#define GPIOIntStatus_IgnoreAndReturn(cmock_retval) GPIOIntStatus_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void GPIOIntStatus_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define GPIOIntStatus_StopIgnore() GPIOIntStatus_CMockStopIgnore()
void GPIOIntStatus_CMockStopIgnore(void);
#define GPIOIntStatus_ExpectAndReturn(ui32Port, bMasked, cmock_retval) GPIOIntStatus_CMockExpectAndReturn(__LINE__, ui32Port, bMasked, cmock_retval)
void GPIOIntStatus_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, bool bMasked, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_GPIOIntStatus_CALLBACK)(uint32_t ui32Port, bool bMasked, int cmock_num_calls);
void GPIOIntStatus_AddCallback(CMOCK_GPIOIntStatus_CALLBACK Callback);
void GPIOIntStatus_Stub(CMOCK_GPIOIntStatus_CALLBACK Callback);
#define GPIOIntStatus_StubWithCallback GPIOIntStatus_Stub
#define GPIOIntClear_Ignore() GPIOIntClear_CMockIgnore()
void GPIOIntClear_CMockIgnore(void);
#define GPIOIntClear_StopIgnore() GPIOIntClear_CMockStopIgnore()
void GPIOIntClear_CMockStopIgnore(void);
#define GPIOIntClear_Expect(ui32Port, ui32IntFlags) GPIOIntClear_CMockExpect(__LINE__, ui32Port, ui32IntFlags)
void GPIOIntClear_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint32_t ui32IntFlags);
typedef void (* CMOCK_GPIOIntClear_CALLBACK)(uint32_t ui32Port, uint32_t ui32IntFlags, int cmock_num_calls);
void GPIOIntClear_AddCallback(CMOCK_GPIOIntClear_CALLBACK Callback);
void GPIOIntClear_Stub(CMOCK_GPIOIntClear_CALLBACK Callback);
#define GPIOIntClear_StubWithCallback GPIOIntClear_Stub
#define GPIOIntRegister_Ignore() GPIOIntRegister_CMockIgnore()
void GPIOIntRegister_CMockIgnore(void);
#define GPIOIntRegister_StopIgnore() GPIOIntRegister_CMockStopIgnore()
void GPIOIntRegister_CMockStopIgnore(void);
#define GPIOIntRegister_Expect(ui32Port, pfnIntHandler) GPIOIntRegister_CMockExpect(__LINE__, ui32Port, pfnIntHandler)
void GPIOIntRegister_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, cmock_gpio_func_ptr1 pfnIntHandler);
typedef void (* CMOCK_GPIOIntRegister_CALLBACK)(uint32_t ui32Port, cmock_gpio_func_ptr1 pfnIntHandler, int cmock_num_calls);
void GPIOIntRegister_AddCallback(CMOCK_GPIOIntRegister_CALLBACK Callback);
void GPIOIntRegister_Stub(CMOCK_GPIOIntRegister_CALLBACK Callback);
#define GPIOIntRegister_StubWithCallback GPIOIntRegister_Stub
#define GPIOIntUnregister_Ignore() GPIOIntUnregister_CMockIgnore()
void GPIOIntUnregister_CMockIgnore(void);
#define GPIOIntUnregister_StopIgnore() GPIOIntUnregister_CMockStopIgnore()
void GPIOIntUnregister_CMockStopIgnore(void);
#define GPIOIntUnregister_Expect(ui32Port) GPIOIntUnregister_CMockExpect(__LINE__, ui32Port)
void GPIOIntUnregister_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port);
typedef void (* CMOCK_GPIOIntUnregister_CALLBACK)(uint32_t ui32Port, int cmock_num_calls);
void GPIOIntUnregister_AddCallback(CMOCK_GPIOIntUnregister_CALLBACK Callback);
void GPIOIntUnregister_Stub(CMOCK_GPIOIntUnregister_CALLBACK Callback);
#define GPIOIntUnregister_StubWithCallback GPIOIntUnregister_Stub
#define GPIOIntRegisterPin_Ignore() GPIOIntRegisterPin_CMockIgnore()
void GPIOIntRegisterPin_CMockIgnore(void);
#define GPIOIntRegisterPin_StopIgnore() GPIOIntRegisterPin_CMockStopIgnore()
void GPIOIntRegisterPin_CMockStopIgnore(void);
#define GPIOIntRegisterPin_Expect(ui32Port, ui32Pin, pfnIntHandler) GPIOIntRegisterPin_CMockExpect(__LINE__, ui32Port, ui32Pin, pfnIntHandler)
void GPIOIntRegisterPin_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint32_t ui32Pin, cmock_gpio_func_ptr2 pfnIntHandler);
typedef void (* CMOCK_GPIOIntRegisterPin_CALLBACK)(uint32_t ui32Port, uint32_t ui32Pin, cmock_gpio_func_ptr2 pfnIntHandler, int cmock_num_calls);
void GPIOIntRegisterPin_AddCallback(CMOCK_GPIOIntRegisterPin_CALLBACK Callback);
void GPIOIntRegisterPin_Stub(CMOCK_GPIOIntRegisterPin_CALLBACK Callback);
#define GPIOIntRegisterPin_StubWithCallback GPIOIntRegisterPin_Stub
#define GPIOIntUnregisterPin_Ignore() GPIOIntUnregisterPin_CMockIgnore()
void GPIOIntUnregisterPin_CMockIgnore(void);
#define GPIOIntUnregisterPin_StopIgnore() GPIOIntUnregisterPin_CMockStopIgnore()
void GPIOIntUnregisterPin_CMockStopIgnore(void);
#define GPIOIntUnregisterPin_Expect(ui32Port, ui32Pin) GPIOIntUnregisterPin_CMockExpect(__LINE__, ui32Port, ui32Pin)
void GPIOIntUnregisterPin_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint32_t ui32Pin);
typedef void (* CMOCK_GPIOIntUnregisterPin_CALLBACK)(uint32_t ui32Port, uint32_t ui32Pin, int cmock_num_calls);
void GPIOIntUnregisterPin_AddCallback(CMOCK_GPIOIntUnregisterPin_CALLBACK Callback);
void GPIOIntUnregisterPin_Stub(CMOCK_GPIOIntUnregisterPin_CALLBACK Callback);
#define GPIOIntUnregisterPin_StubWithCallback GPIOIntUnregisterPin_Stub
#define GPIOPinRead_IgnoreAndReturn(cmock_retval) GPIOPinRead_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void GPIOPinRead_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int32_t cmock_to_return);
#define GPIOPinRead_StopIgnore() GPIOPinRead_CMockStopIgnore()
void GPIOPinRead_CMockStopIgnore(void);
#define GPIOPinRead_ExpectAndReturn(ui32Port, ui8Pins, cmock_retval) GPIOPinRead_CMockExpectAndReturn(__LINE__, ui32Port, ui8Pins, cmock_retval)
void GPIOPinRead_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins, int32_t cmock_to_return);
typedef int32_t (* CMOCK_GPIOPinRead_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinRead_AddCallback(CMOCK_GPIOPinRead_CALLBACK Callback);
void GPIOPinRead_Stub(CMOCK_GPIOPinRead_CALLBACK Callback);
#define GPIOPinRead_StubWithCallback GPIOPinRead_Stub
#define GPIOPinWrite_Ignore() GPIOPinWrite_CMockIgnore()
void GPIOPinWrite_CMockIgnore(void);
#define GPIOPinWrite_StopIgnore() GPIOPinWrite_CMockStopIgnore()
void GPIOPinWrite_CMockStopIgnore(void);
#define GPIOPinWrite_Expect(ui32Port, ui8Pins, ui8Val) GPIOPinWrite_CMockExpect(__LINE__, ui32Port, ui8Pins, ui8Val)
void GPIOPinWrite_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins, uint8_t ui8Val);
typedef void (* CMOCK_GPIOPinWrite_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, uint8_t ui8Val, int cmock_num_calls);
void GPIOPinWrite_AddCallback(CMOCK_GPIOPinWrite_CALLBACK Callback);
void GPIOPinWrite_Stub(CMOCK_GPIOPinWrite_CALLBACK Callback);
#define GPIOPinWrite_StubWithCallback GPIOPinWrite_Stub
#define GPIOPinConfigure_Ignore() GPIOPinConfigure_CMockIgnore()
void GPIOPinConfigure_CMockIgnore(void);
#define GPIOPinConfigure_StopIgnore() GPIOPinConfigure_CMockStopIgnore()
void GPIOPinConfigure_CMockStopIgnore(void);
#define GPIOPinConfigure_Expect(ui32PinConfig) GPIOPinConfigure_CMockExpect(__LINE__, ui32PinConfig)
void GPIOPinConfigure_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32PinConfig);
typedef void (* CMOCK_GPIOPinConfigure_CALLBACK)(uint32_t ui32PinConfig, int cmock_num_calls);
void GPIOPinConfigure_AddCallback(CMOCK_GPIOPinConfigure_CALLBACK Callback);
void GPIOPinConfigure_Stub(CMOCK_GPIOPinConfigure_CALLBACK Callback);
#define GPIOPinConfigure_StubWithCallback GPIOPinConfigure_Stub
#define GPIOPinTypeADC_Ignore() GPIOPinTypeADC_CMockIgnore()
void GPIOPinTypeADC_CMockIgnore(void);
#define GPIOPinTypeADC_StopIgnore() GPIOPinTypeADC_CMockStopIgnore()
void GPIOPinTypeADC_CMockStopIgnore(void);
#define GPIOPinTypeADC_Expect(ui32Port, ui8Pins) GPIOPinTypeADC_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeADC_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeADC_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeADC_AddCallback(CMOCK_GPIOPinTypeADC_CALLBACK Callback);
void GPIOPinTypeADC_Stub(CMOCK_GPIOPinTypeADC_CALLBACK Callback);
#define GPIOPinTypeADC_StubWithCallback GPIOPinTypeADC_Stub
#define GPIOPinTypeCAN_Ignore() GPIOPinTypeCAN_CMockIgnore()
void GPIOPinTypeCAN_CMockIgnore(void);
#define GPIOPinTypeCAN_StopIgnore() GPIOPinTypeCAN_CMockStopIgnore()
void GPIOPinTypeCAN_CMockStopIgnore(void);
#define GPIOPinTypeCAN_Expect(ui32Port, ui8Pins) GPIOPinTypeCAN_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeCAN_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeCAN_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeCAN_AddCallback(CMOCK_GPIOPinTypeCAN_CALLBACK Callback);
void GPIOPinTypeCAN_Stub(CMOCK_GPIOPinTypeCAN_CALLBACK Callback);
#define GPIOPinTypeCAN_StubWithCallback GPIOPinTypeCAN_Stub
#define GPIOPinTypeComparator_Ignore() GPIOPinTypeComparator_CMockIgnore()
void GPIOPinTypeComparator_CMockIgnore(void);
#define GPIOPinTypeComparator_StopIgnore() GPIOPinTypeComparator_CMockStopIgnore()
void GPIOPinTypeComparator_CMockStopIgnore(void);
#define GPIOPinTypeComparator_Expect(ui32Port, ui8Pins) GPIOPinTypeComparator_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeComparator_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeComparator_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeComparator_AddCallback(CMOCK_GPIOPinTypeComparator_CALLBACK Callback);
void GPIOPinTypeComparator_Stub(CMOCK_GPIOPinTypeComparator_CALLBACK Callback);
#define GPIOPinTypeComparator_StubWithCallback GPIOPinTypeComparator_Stub
#define GPIOPinTypeComparatorOutput_Ignore() GPIOPinTypeComparatorOutput_CMockIgnore()
void GPIOPinTypeComparatorOutput_CMockIgnore(void);
#define GPIOPinTypeComparatorOutput_StopIgnore() GPIOPinTypeComparatorOutput_CMockStopIgnore()
void GPIOPinTypeComparatorOutput_CMockStopIgnore(void);
#define GPIOPinTypeComparatorOutput_Expect(ui32Port, ui8Pins) GPIOPinTypeComparatorOutput_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeComparatorOutput_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeComparatorOutput_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeComparatorOutput_AddCallback(CMOCK_GPIOPinTypeComparatorOutput_CALLBACK Callback);
void GPIOPinTypeComparatorOutput_Stub(CMOCK_GPIOPinTypeComparatorOutput_CALLBACK Callback);
#define GPIOPinTypeComparatorOutput_StubWithCallback GPIOPinTypeComparatorOutput_Stub
#define GPIOPinTypeDIVSCLK_Ignore() GPIOPinTypeDIVSCLK_CMockIgnore()
void GPIOPinTypeDIVSCLK_CMockIgnore(void);
#define GPIOPinTypeDIVSCLK_StopIgnore() GPIOPinTypeDIVSCLK_CMockStopIgnore()
void GPIOPinTypeDIVSCLK_CMockStopIgnore(void);
#define GPIOPinTypeDIVSCLK_Expect(ui32Port, ui8Pins) GPIOPinTypeDIVSCLK_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeDIVSCLK_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeDIVSCLK_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeDIVSCLK_AddCallback(CMOCK_GPIOPinTypeDIVSCLK_CALLBACK Callback);
void GPIOPinTypeDIVSCLK_Stub(CMOCK_GPIOPinTypeDIVSCLK_CALLBACK Callback);
#define GPIOPinTypeDIVSCLK_StubWithCallback GPIOPinTypeDIVSCLK_Stub
#define GPIOPinTypeEPI_Ignore() GPIOPinTypeEPI_CMockIgnore()
void GPIOPinTypeEPI_CMockIgnore(void);
#define GPIOPinTypeEPI_StopIgnore() GPIOPinTypeEPI_CMockStopIgnore()
void GPIOPinTypeEPI_CMockStopIgnore(void);
#define GPIOPinTypeEPI_Expect(ui32Port, ui8Pins) GPIOPinTypeEPI_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeEPI_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeEPI_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeEPI_AddCallback(CMOCK_GPIOPinTypeEPI_CALLBACK Callback);
void GPIOPinTypeEPI_Stub(CMOCK_GPIOPinTypeEPI_CALLBACK Callback);
#define GPIOPinTypeEPI_StubWithCallback GPIOPinTypeEPI_Stub
#define GPIOPinTypeEthernetLED_Ignore() GPIOPinTypeEthernetLED_CMockIgnore()
void GPIOPinTypeEthernetLED_CMockIgnore(void);
#define GPIOPinTypeEthernetLED_StopIgnore() GPIOPinTypeEthernetLED_CMockStopIgnore()
void GPIOPinTypeEthernetLED_CMockStopIgnore(void);
#define GPIOPinTypeEthernetLED_Expect(ui32Port, ui8Pins) GPIOPinTypeEthernetLED_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeEthernetLED_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeEthernetLED_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeEthernetLED_AddCallback(CMOCK_GPIOPinTypeEthernetLED_CALLBACK Callback);
void GPIOPinTypeEthernetLED_Stub(CMOCK_GPIOPinTypeEthernetLED_CALLBACK Callback);
#define GPIOPinTypeEthernetLED_StubWithCallback GPIOPinTypeEthernetLED_Stub
#define GPIOPinTypeEthernetMII_Ignore() GPIOPinTypeEthernetMII_CMockIgnore()
void GPIOPinTypeEthernetMII_CMockIgnore(void);
#define GPIOPinTypeEthernetMII_StopIgnore() GPIOPinTypeEthernetMII_CMockStopIgnore()
void GPIOPinTypeEthernetMII_CMockStopIgnore(void);
#define GPIOPinTypeEthernetMII_Expect(ui32Port, ui8Pins) GPIOPinTypeEthernetMII_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeEthernetMII_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeEthernetMII_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeEthernetMII_AddCallback(CMOCK_GPIOPinTypeEthernetMII_CALLBACK Callback);
void GPIOPinTypeEthernetMII_Stub(CMOCK_GPIOPinTypeEthernetMII_CALLBACK Callback);
#define GPIOPinTypeEthernetMII_StubWithCallback GPIOPinTypeEthernetMII_Stub
#define GPIOPinTypeGPIOInput_Ignore() GPIOPinTypeGPIOInput_CMockIgnore()
void GPIOPinTypeGPIOInput_CMockIgnore(void);
#define GPIOPinTypeGPIOInput_StopIgnore() GPIOPinTypeGPIOInput_CMockStopIgnore()
void GPIOPinTypeGPIOInput_CMockStopIgnore(void);
#define GPIOPinTypeGPIOInput_Expect(ui32Port, ui8Pins) GPIOPinTypeGPIOInput_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeGPIOInput_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeGPIOInput_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeGPIOInput_AddCallback(CMOCK_GPIOPinTypeGPIOInput_CALLBACK Callback);
void GPIOPinTypeGPIOInput_Stub(CMOCK_GPIOPinTypeGPIOInput_CALLBACK Callback);
#define GPIOPinTypeGPIOInput_StubWithCallback GPIOPinTypeGPIOInput_Stub
#define GPIOPinTypeGPIOOutput_Ignore() GPIOPinTypeGPIOOutput_CMockIgnore()
void GPIOPinTypeGPIOOutput_CMockIgnore(void);
#define GPIOPinTypeGPIOOutput_StopIgnore() GPIOPinTypeGPIOOutput_CMockStopIgnore()
void GPIOPinTypeGPIOOutput_CMockStopIgnore(void);
#define GPIOPinTypeGPIOOutput_Expect(ui32Port, ui8Pins) GPIOPinTypeGPIOOutput_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeGPIOOutput_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeGPIOOutput_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeGPIOOutput_AddCallback(CMOCK_GPIOPinTypeGPIOOutput_CALLBACK Callback);
void GPIOPinTypeGPIOOutput_Stub(CMOCK_GPIOPinTypeGPIOOutput_CALLBACK Callback);
#define GPIOPinTypeGPIOOutput_StubWithCallback GPIOPinTypeGPIOOutput_Stub
#define GPIOPinTypeGPIOOutputOD_Ignore() GPIOPinTypeGPIOOutputOD_CMockIgnore()
void GPIOPinTypeGPIOOutputOD_CMockIgnore(void);
#define GPIOPinTypeGPIOOutputOD_StopIgnore() GPIOPinTypeGPIOOutputOD_CMockStopIgnore()
void GPIOPinTypeGPIOOutputOD_CMockStopIgnore(void);
#define GPIOPinTypeGPIOOutputOD_Expect(ui32Port, ui8Pins) GPIOPinTypeGPIOOutputOD_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeGPIOOutputOD_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeGPIOOutputOD_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeGPIOOutputOD_AddCallback(CMOCK_GPIOPinTypeGPIOOutputOD_CALLBACK Callback);
void GPIOPinTypeGPIOOutputOD_Stub(CMOCK_GPIOPinTypeGPIOOutputOD_CALLBACK Callback);
#define GPIOPinTypeGPIOOutputOD_StubWithCallback GPIOPinTypeGPIOOutputOD_Stub
#define GPIOPinTypeHibernateRTCCLK_Ignore() GPIOPinTypeHibernateRTCCLK_CMockIgnore()
void GPIOPinTypeHibernateRTCCLK_CMockIgnore(void);
#define GPIOPinTypeHibernateRTCCLK_StopIgnore() GPIOPinTypeHibernateRTCCLK_CMockStopIgnore()
void GPIOPinTypeHibernateRTCCLK_CMockStopIgnore(void);
#define GPIOPinTypeHibernateRTCCLK_Expect(ui32Port, ui8Pins) GPIOPinTypeHibernateRTCCLK_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeHibernateRTCCLK_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeHibernateRTCCLK_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeHibernateRTCCLK_AddCallback(CMOCK_GPIOPinTypeHibernateRTCCLK_CALLBACK Callback);
void GPIOPinTypeHibernateRTCCLK_Stub(CMOCK_GPIOPinTypeHibernateRTCCLK_CALLBACK Callback);
#define GPIOPinTypeHibernateRTCCLK_StubWithCallback GPIOPinTypeHibernateRTCCLK_Stub
#define GPIOPinTypeI2C_Ignore() GPIOPinTypeI2C_CMockIgnore()
void GPIOPinTypeI2C_CMockIgnore(void);
#define GPIOPinTypeI2C_StopIgnore() GPIOPinTypeI2C_CMockStopIgnore()
void GPIOPinTypeI2C_CMockStopIgnore(void);
#define GPIOPinTypeI2C_Expect(ui32Port, ui8Pins) GPIOPinTypeI2C_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeI2C_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeI2C_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeI2C_AddCallback(CMOCK_GPIOPinTypeI2C_CALLBACK Callback);
void GPIOPinTypeI2C_Stub(CMOCK_GPIOPinTypeI2C_CALLBACK Callback);
#define GPIOPinTypeI2C_StubWithCallback GPIOPinTypeI2C_Stub
#define GPIOPinTypeI2CSCL_Ignore() GPIOPinTypeI2CSCL_CMockIgnore()
void GPIOPinTypeI2CSCL_CMockIgnore(void);
#define GPIOPinTypeI2CSCL_StopIgnore() GPIOPinTypeI2CSCL_CMockStopIgnore()
void GPIOPinTypeI2CSCL_CMockStopIgnore(void);
#define GPIOPinTypeI2CSCL_Expect(ui32Port, ui8Pins) GPIOPinTypeI2CSCL_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeI2CSCL_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeI2CSCL_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeI2CSCL_AddCallback(CMOCK_GPIOPinTypeI2CSCL_CALLBACK Callback);
void GPIOPinTypeI2CSCL_Stub(CMOCK_GPIOPinTypeI2CSCL_CALLBACK Callback);
#define GPIOPinTypeI2CSCL_StubWithCallback GPIOPinTypeI2CSCL_Stub
#define GPIOPinTypeLCD_Ignore() GPIOPinTypeLCD_CMockIgnore()
void GPIOPinTypeLCD_CMockIgnore(void);
#define GPIOPinTypeLCD_StopIgnore() GPIOPinTypeLCD_CMockStopIgnore()
void GPIOPinTypeLCD_CMockStopIgnore(void);
#define GPIOPinTypeLCD_Expect(ui32Port, ui8Pins) GPIOPinTypeLCD_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeLCD_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeLCD_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeLCD_AddCallback(CMOCK_GPIOPinTypeLCD_CALLBACK Callback);
void GPIOPinTypeLCD_Stub(CMOCK_GPIOPinTypeLCD_CALLBACK Callback);
#define GPIOPinTypeLCD_StubWithCallback GPIOPinTypeLCD_Stub
#define GPIOPinTypeOneWire_Ignore() GPIOPinTypeOneWire_CMockIgnore()
void GPIOPinTypeOneWire_CMockIgnore(void);
#define GPIOPinTypeOneWire_StopIgnore() GPIOPinTypeOneWire_CMockStopIgnore()
void GPIOPinTypeOneWire_CMockStopIgnore(void);
#define GPIOPinTypeOneWire_Expect(ui32Port, ui8Pins) GPIOPinTypeOneWire_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeOneWire_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeOneWire_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeOneWire_AddCallback(CMOCK_GPIOPinTypeOneWire_CALLBACK Callback);
void GPIOPinTypeOneWire_Stub(CMOCK_GPIOPinTypeOneWire_CALLBACK Callback);
#define GPIOPinTypeOneWire_StubWithCallback GPIOPinTypeOneWire_Stub
#define GPIOPinTypePWM_Ignore() GPIOPinTypePWM_CMockIgnore()
void GPIOPinTypePWM_CMockIgnore(void);
#define GPIOPinTypePWM_StopIgnore() GPIOPinTypePWM_CMockStopIgnore()
void GPIOPinTypePWM_CMockStopIgnore(void);
#define GPIOPinTypePWM_Expect(ui32Port, ui8Pins) GPIOPinTypePWM_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypePWM_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypePWM_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypePWM_AddCallback(CMOCK_GPIOPinTypePWM_CALLBACK Callback);
void GPIOPinTypePWM_Stub(CMOCK_GPIOPinTypePWM_CALLBACK Callback);
#define GPIOPinTypePWM_StubWithCallback GPIOPinTypePWM_Stub
#define GPIOPinTypeQEI_Ignore() GPIOPinTypeQEI_CMockIgnore()
void GPIOPinTypeQEI_CMockIgnore(void);
#define GPIOPinTypeQEI_StopIgnore() GPIOPinTypeQEI_CMockStopIgnore()
void GPIOPinTypeQEI_CMockStopIgnore(void);
#define GPIOPinTypeQEI_Expect(ui32Port, ui8Pins) GPIOPinTypeQEI_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeQEI_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeQEI_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeQEI_AddCallback(CMOCK_GPIOPinTypeQEI_CALLBACK Callback);
void GPIOPinTypeQEI_Stub(CMOCK_GPIOPinTypeQEI_CALLBACK Callback);
#define GPIOPinTypeQEI_StubWithCallback GPIOPinTypeQEI_Stub
#define GPIOPinTypeSSI_Ignore() GPIOPinTypeSSI_CMockIgnore()
void GPIOPinTypeSSI_CMockIgnore(void);
#define GPIOPinTypeSSI_StopIgnore() GPIOPinTypeSSI_CMockStopIgnore()
void GPIOPinTypeSSI_CMockStopIgnore(void);
#define GPIOPinTypeSSI_Expect(ui32Port, ui8Pins) GPIOPinTypeSSI_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeSSI_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeSSI_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeSSI_AddCallback(CMOCK_GPIOPinTypeSSI_CALLBACK Callback);
void GPIOPinTypeSSI_Stub(CMOCK_GPIOPinTypeSSI_CALLBACK Callback);
#define GPIOPinTypeSSI_StubWithCallback GPIOPinTypeSSI_Stub
#define GPIOPinTypeTimer_Ignore() GPIOPinTypeTimer_CMockIgnore()
void GPIOPinTypeTimer_CMockIgnore(void);
#define GPIOPinTypeTimer_StopIgnore() GPIOPinTypeTimer_CMockStopIgnore()
void GPIOPinTypeTimer_CMockStopIgnore(void);
#define GPIOPinTypeTimer_Expect(ui32Port, ui8Pins) GPIOPinTypeTimer_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeTimer_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeTimer_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeTimer_AddCallback(CMOCK_GPIOPinTypeTimer_CALLBACK Callback);
void GPIOPinTypeTimer_Stub(CMOCK_GPIOPinTypeTimer_CALLBACK Callback);
#define GPIOPinTypeTimer_StubWithCallback GPIOPinTypeTimer_Stub
#define GPIOPinTypeTrace_Ignore() GPIOPinTypeTrace_CMockIgnore()
void GPIOPinTypeTrace_CMockIgnore(void);
#define GPIOPinTypeTrace_StopIgnore() GPIOPinTypeTrace_CMockStopIgnore()
void GPIOPinTypeTrace_CMockStopIgnore(void);
#define GPIOPinTypeTrace_Expect(ui32Port, ui8Pins) GPIOPinTypeTrace_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeTrace_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeTrace_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeTrace_AddCallback(CMOCK_GPIOPinTypeTrace_CALLBACK Callback);
void GPIOPinTypeTrace_Stub(CMOCK_GPIOPinTypeTrace_CALLBACK Callback);
#define GPIOPinTypeTrace_StubWithCallback GPIOPinTypeTrace_Stub
#define GPIOPinTypeUART_Ignore() GPIOPinTypeUART_CMockIgnore()
void GPIOPinTypeUART_CMockIgnore(void);
#define GPIOPinTypeUART_StopIgnore() GPIOPinTypeUART_CMockStopIgnore()
void GPIOPinTypeUART_CMockStopIgnore(void);
#define GPIOPinTypeUART_Expect(ui32Port, ui8Pins) GPIOPinTypeUART_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeUART_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeUART_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeUART_AddCallback(CMOCK_GPIOPinTypeUART_CALLBACK Callback);
void GPIOPinTypeUART_Stub(CMOCK_GPIOPinTypeUART_CALLBACK Callback);
#define GPIOPinTypeUART_StubWithCallback GPIOPinTypeUART_Stub
#define GPIOPinTypeUSBAnalog_Ignore() GPIOPinTypeUSBAnalog_CMockIgnore()
void GPIOPinTypeUSBAnalog_CMockIgnore(void);
#define GPIOPinTypeUSBAnalog_StopIgnore() GPIOPinTypeUSBAnalog_CMockStopIgnore()
void GPIOPinTypeUSBAnalog_CMockStopIgnore(void);
#define GPIOPinTypeUSBAnalog_Expect(ui32Port, ui8Pins) GPIOPinTypeUSBAnalog_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeUSBAnalog_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeUSBAnalog_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeUSBAnalog_AddCallback(CMOCK_GPIOPinTypeUSBAnalog_CALLBACK Callback);
void GPIOPinTypeUSBAnalog_Stub(CMOCK_GPIOPinTypeUSBAnalog_CALLBACK Callback);
#define GPIOPinTypeUSBAnalog_StubWithCallback GPIOPinTypeUSBAnalog_Stub
#define GPIOPinTypeUSBDigital_Ignore() GPIOPinTypeUSBDigital_CMockIgnore()
void GPIOPinTypeUSBDigital_CMockIgnore(void);
#define GPIOPinTypeUSBDigital_StopIgnore() GPIOPinTypeUSBDigital_CMockStopIgnore()
void GPIOPinTypeUSBDigital_CMockStopIgnore(void);
#define GPIOPinTypeUSBDigital_Expect(ui32Port, ui8Pins) GPIOPinTypeUSBDigital_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeUSBDigital_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeUSBDigital_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeUSBDigital_AddCallback(CMOCK_GPIOPinTypeUSBDigital_CALLBACK Callback);
void GPIOPinTypeUSBDigital_Stub(CMOCK_GPIOPinTypeUSBDigital_CALLBACK Callback);
#define GPIOPinTypeUSBDigital_StubWithCallback GPIOPinTypeUSBDigital_Stub
#define GPIOPinTypeWakeHigh_Ignore() GPIOPinTypeWakeHigh_CMockIgnore()
void GPIOPinTypeWakeHigh_CMockIgnore(void);
#define GPIOPinTypeWakeHigh_StopIgnore() GPIOPinTypeWakeHigh_CMockStopIgnore()
void GPIOPinTypeWakeHigh_CMockStopIgnore(void);
#define GPIOPinTypeWakeHigh_Expect(ui32Port, ui8Pins) GPIOPinTypeWakeHigh_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeWakeHigh_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeWakeHigh_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeWakeHigh_AddCallback(CMOCK_GPIOPinTypeWakeHigh_CALLBACK Callback);
void GPIOPinTypeWakeHigh_Stub(CMOCK_GPIOPinTypeWakeHigh_CALLBACK Callback);
#define GPIOPinTypeWakeHigh_StubWithCallback GPIOPinTypeWakeHigh_Stub
#define GPIOPinTypeWakeLow_Ignore() GPIOPinTypeWakeLow_CMockIgnore()
void GPIOPinTypeWakeLow_CMockIgnore(void);
#define GPIOPinTypeWakeLow_StopIgnore() GPIOPinTypeWakeLow_CMockStopIgnore()
void GPIOPinTypeWakeLow_CMockStopIgnore(void);
#define GPIOPinTypeWakeLow_Expect(ui32Port, ui8Pins) GPIOPinTypeWakeLow_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeWakeLow_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeWakeLow_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeWakeLow_AddCallback(CMOCK_GPIOPinTypeWakeLow_CALLBACK Callback);
void GPIOPinTypeWakeLow_Stub(CMOCK_GPIOPinTypeWakeLow_CALLBACK Callback);
#define GPIOPinTypeWakeLow_StubWithCallback GPIOPinTypeWakeLow_Stub
#define GPIOPinWakeStatus_IgnoreAndReturn(cmock_retval) GPIOPinWakeStatus_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void GPIOPinWakeStatus_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define GPIOPinWakeStatus_StopIgnore() GPIOPinWakeStatus_CMockStopIgnore()
void GPIOPinWakeStatus_CMockStopIgnore(void);
#define GPIOPinWakeStatus_ExpectAndReturn(ui32Port, cmock_retval) GPIOPinWakeStatus_CMockExpectAndReturn(__LINE__, ui32Port, cmock_retval)
void GPIOPinWakeStatus_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_GPIOPinWakeStatus_CALLBACK)(uint32_t ui32Port, int cmock_num_calls);
void GPIOPinWakeStatus_AddCallback(CMOCK_GPIOPinWakeStatus_CALLBACK Callback);
void GPIOPinWakeStatus_Stub(CMOCK_GPIOPinWakeStatus_CALLBACK Callback);
#define GPIOPinWakeStatus_StubWithCallback GPIOPinWakeStatus_Stub
#define GPIODMATriggerEnable_Ignore() GPIODMATriggerEnable_CMockIgnore()
void GPIODMATriggerEnable_CMockIgnore(void);
#define GPIODMATriggerEnable_StopIgnore() GPIODMATriggerEnable_CMockStopIgnore()
void GPIODMATriggerEnable_CMockStopIgnore(void);
#define GPIODMATriggerEnable_Expect(ui32Port, ui8Pins) GPIODMATriggerEnable_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIODMATriggerEnable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIODMATriggerEnable_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIODMATriggerEnable_AddCallback(CMOCK_GPIODMATriggerEnable_CALLBACK Callback);
void GPIODMATriggerEnable_Stub(CMOCK_GPIODMATriggerEnable_CALLBACK Callback);
#define GPIODMATriggerEnable_StubWithCallback GPIODMATriggerEnable_Stub
#define GPIODMATriggerDisable_Ignore() GPIODMATriggerDisable_CMockIgnore()
void GPIODMATriggerDisable_CMockIgnore(void);
#define GPIODMATriggerDisable_StopIgnore() GPIODMATriggerDisable_CMockStopIgnore()
void GPIODMATriggerDisable_CMockStopIgnore(void);
#define GPIODMATriggerDisable_Expect(ui32Port, ui8Pins) GPIODMATriggerDisable_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIODMATriggerDisable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIODMATriggerDisable_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIODMATriggerDisable_AddCallback(CMOCK_GPIODMATriggerDisable_CALLBACK Callback);
void GPIODMATriggerDisable_Stub(CMOCK_GPIODMATriggerDisable_CALLBACK Callback);
#define GPIODMATriggerDisable_StubWithCallback GPIODMATriggerDisable_Stub
#define GPIOADCTriggerEnable_Ignore() GPIOADCTriggerEnable_CMockIgnore()
void GPIOADCTriggerEnable_CMockIgnore(void);
#define GPIOADCTriggerEnable_StopIgnore() GPIOADCTriggerEnable_CMockStopIgnore()
void GPIOADCTriggerEnable_CMockStopIgnore(void);
#define GPIOADCTriggerEnable_Expect(ui32Port, ui8Pins) GPIOADCTriggerEnable_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOADCTriggerEnable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOADCTriggerEnable_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOADCTriggerEnable_AddCallback(CMOCK_GPIOADCTriggerEnable_CALLBACK Callback);
void GPIOADCTriggerEnable_Stub(CMOCK_GPIOADCTriggerEnable_CALLBACK Callback);
#define GPIOADCTriggerEnable_StubWithCallback GPIOADCTriggerEnable_Stub
#define GPIOADCTriggerDisable_Ignore() GPIOADCTriggerDisable_CMockIgnore()
void GPIOADCTriggerDisable_CMockIgnore(void);
#define GPIOADCTriggerDisable_StopIgnore() GPIOADCTriggerDisable_CMockStopIgnore()
void GPIOADCTriggerDisable_CMockStopIgnore(void);
#define GPIOADCTriggerDisable_Expect(ui32Port, ui8Pins) GPIOADCTriggerDisable_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOADCTriggerDisable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOADCTriggerDisable_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOADCTriggerDisable_AddCallback(CMOCK_GPIOADCTriggerDisable_CALLBACK Callback);
void GPIOADCTriggerDisable_Stub(CMOCK_GPIOADCTriggerDisable_CALLBACK Callback);
#define GPIOADCTriggerDisable_StubWithCallback GPIOADCTriggerDisable_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
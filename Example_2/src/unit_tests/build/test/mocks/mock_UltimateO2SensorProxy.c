/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_UltimateO2SensorProxy.h"

static const char* CMockString_accessGasFlow = "accessGasFlow";
static const char* CMockString_accessO2Conc = "accessO2Conc";

typedef struct _CMOCK_accessO2Conc_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  unsigned int ReturnVal;

} CMOCK_accessO2Conc_CALL_INSTANCE;

typedef struct _CMOCK_accessGasFlow_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  unsigned long ReturnVal;

} CMOCK_accessGasFlow_CALL_INSTANCE;

static struct mock_UltimateO2SensorProxyInstance
{
  char accessO2Conc_IgnoreBool;
  unsigned int accessO2Conc_FinalReturn;
  char accessO2Conc_CallbackBool;
  CMOCK_accessO2Conc_CALLBACK accessO2Conc_CallbackFunctionPointer;
  int accessO2Conc_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE accessO2Conc_CallInstance;
  char accessGasFlow_IgnoreBool;
  unsigned long accessGasFlow_FinalReturn;
  char accessGasFlow_CallbackBool;
  CMOCK_accessGasFlow_CALLBACK accessGasFlow_CallbackFunctionPointer;
  int accessGasFlow_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE accessGasFlow_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void mock_UltimateO2SensorProxy_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.accessO2Conc_CallInstance;
  if (Mock.accessO2Conc_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_accessO2Conc);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.accessO2Conc_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.accessGasFlow_CallInstance;
  if (Mock.accessGasFlow_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_accessGasFlow);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.accessGasFlow_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_UltimateO2SensorProxy_Init(void)
{
  mock_UltimateO2SensorProxy_Destroy();
}

void mock_UltimateO2SensorProxy_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

unsigned int accessO2Conc(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_accessO2Conc_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_accessO2Conc);
  cmock_call_instance = (CMOCK_accessO2Conc_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.accessO2Conc_CallInstance);
  Mock.accessO2Conc_CallInstance = CMock_Guts_MemNext(Mock.accessO2Conc_CallInstance);
  if (Mock.accessO2Conc_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.accessO2Conc_FinalReturn;
    Mock.accessO2Conc_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.accessO2Conc_CallbackBool &&
      Mock.accessO2Conc_CallbackFunctionPointer != NULL)
  {
    unsigned int cmock_cb_ret = Mock.accessO2Conc_CallbackFunctionPointer(Mock.accessO2Conc_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.accessO2Conc_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.accessO2Conc_CallbackFunctionPointer(Mock.accessO2Conc_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void accessO2Conc_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, unsigned int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_accessO2Conc_CALL_INSTANCE));
  CMOCK_accessO2Conc_CALL_INSTANCE* cmock_call_instance = (CMOCK_accessO2Conc_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.accessO2Conc_CallInstance = CMock_Guts_MemChain(Mock.accessO2Conc_CallInstance, cmock_guts_index);
  Mock.accessO2Conc_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.accessO2Conc_IgnoreBool = (char)1;
}

void accessO2Conc_CMockStopIgnore(void)
{
  if(Mock.accessO2Conc_IgnoreBool)
    Mock.accessO2Conc_CallInstance = CMock_Guts_MemNext(Mock.accessO2Conc_CallInstance);
  Mock.accessO2Conc_IgnoreBool = (char)0;
}

void accessO2Conc_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, unsigned int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_accessO2Conc_CALL_INSTANCE));
  CMOCK_accessO2Conc_CALL_INSTANCE* cmock_call_instance = (CMOCK_accessO2Conc_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.accessO2Conc_CallInstance = CMock_Guts_MemChain(Mock.accessO2Conc_CallInstance, cmock_guts_index);
  Mock.accessO2Conc_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void accessO2Conc_AddCallback(CMOCK_accessO2Conc_CALLBACK Callback)
{
  Mock.accessO2Conc_IgnoreBool = (char)0;
  Mock.accessO2Conc_CallbackBool = (char)1;
  Mock.accessO2Conc_CallbackFunctionPointer = Callback;
}

void accessO2Conc_Stub(CMOCK_accessO2Conc_CALLBACK Callback)
{
  Mock.accessO2Conc_IgnoreBool = (char)0;
  Mock.accessO2Conc_CallbackBool = (char)0;
  Mock.accessO2Conc_CallbackFunctionPointer = Callback;
}

unsigned long accessGasFlow(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_accessGasFlow_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_accessGasFlow);
  cmock_call_instance = (CMOCK_accessGasFlow_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.accessGasFlow_CallInstance);
  Mock.accessGasFlow_CallInstance = CMock_Guts_MemNext(Mock.accessGasFlow_CallInstance);
  if (Mock.accessGasFlow_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.accessGasFlow_FinalReturn;
    Mock.accessGasFlow_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.accessGasFlow_CallbackBool &&
      Mock.accessGasFlow_CallbackFunctionPointer != NULL)
  {
    unsigned long cmock_cb_ret = Mock.accessGasFlow_CallbackFunctionPointer(Mock.accessGasFlow_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.accessGasFlow_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.accessGasFlow_CallbackFunctionPointer(Mock.accessGasFlow_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void accessGasFlow_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, unsigned long cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_accessGasFlow_CALL_INSTANCE));
  CMOCK_accessGasFlow_CALL_INSTANCE* cmock_call_instance = (CMOCK_accessGasFlow_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.accessGasFlow_CallInstance = CMock_Guts_MemChain(Mock.accessGasFlow_CallInstance, cmock_guts_index);
  Mock.accessGasFlow_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.accessGasFlow_IgnoreBool = (char)1;
}

void accessGasFlow_CMockStopIgnore(void)
{
  if(Mock.accessGasFlow_IgnoreBool)
    Mock.accessGasFlow_CallInstance = CMock_Guts_MemNext(Mock.accessGasFlow_CallInstance);
  Mock.accessGasFlow_IgnoreBool = (char)0;
}

void accessGasFlow_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, unsigned long cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_accessGasFlow_CALL_INSTANCE));
  CMOCK_accessGasFlow_CALL_INSTANCE* cmock_call_instance = (CMOCK_accessGasFlow_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.accessGasFlow_CallInstance = CMock_Guts_MemChain(Mock.accessGasFlow_CallInstance, cmock_guts_index);
  Mock.accessGasFlow_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void accessGasFlow_AddCallback(CMOCK_accessGasFlow_CALLBACK Callback)
{
  Mock.accessGasFlow_IgnoreBool = (char)0;
  Mock.accessGasFlow_CallbackBool = (char)1;
  Mock.accessGasFlow_CallbackFunctionPointer = Callback;
}

void accessGasFlow_Stub(CMOCK_accessGasFlow_CALLBACK Callback)
{
  Mock.accessGasFlow_IgnoreBool = (char)0;
  Mock.accessGasFlow_CallbackBool = (char)0;
  Mock.accessGasFlow_CallbackFunctionPointer = Callback;
}


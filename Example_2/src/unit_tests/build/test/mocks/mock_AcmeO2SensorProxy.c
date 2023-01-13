/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_AcmeO2SensorProxy.h"

static const char* CMockString_getO2Conc = "getO2Conc";
static const char* CMockString_getO2Flow = "getO2Flow";

typedef struct _CMOCK_getO2Conc_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  unsigned int ReturnVal;

} CMOCK_getO2Conc_CALL_INSTANCE;

typedef struct _CMOCK_getO2Flow_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  unsigned long ReturnVal;

} CMOCK_getO2Flow_CALL_INSTANCE;

static struct mock_AcmeO2SensorProxyInstance
{
  char getO2Conc_IgnoreBool;
  unsigned int getO2Conc_FinalReturn;
  char getO2Conc_CallbackBool;
  CMOCK_getO2Conc_CALLBACK getO2Conc_CallbackFunctionPointer;
  int getO2Conc_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE getO2Conc_CallInstance;
  char getO2Flow_IgnoreBool;
  unsigned long getO2Flow_FinalReturn;
  char getO2Flow_CallbackBool;
  CMOCK_getO2Flow_CALLBACK getO2Flow_CallbackFunctionPointer;
  int getO2Flow_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE getO2Flow_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void mock_AcmeO2SensorProxy_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.getO2Conc_CallInstance;
  if (Mock.getO2Conc_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_getO2Conc);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.getO2Conc_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.getO2Flow_CallInstance;
  if (Mock.getO2Flow_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_getO2Flow);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.getO2Flow_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_AcmeO2SensorProxy_Init(void)
{
  mock_AcmeO2SensorProxy_Destroy();
}

void mock_AcmeO2SensorProxy_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

unsigned int getO2Conc(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_getO2Conc_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_getO2Conc);
  cmock_call_instance = (CMOCK_getO2Conc_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.getO2Conc_CallInstance);
  Mock.getO2Conc_CallInstance = CMock_Guts_MemNext(Mock.getO2Conc_CallInstance);
  if (Mock.getO2Conc_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.getO2Conc_FinalReturn;
    Mock.getO2Conc_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.getO2Conc_CallbackBool &&
      Mock.getO2Conc_CallbackFunctionPointer != NULL)
  {
    unsigned int cmock_cb_ret = Mock.getO2Conc_CallbackFunctionPointer(Mock.getO2Conc_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.getO2Conc_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.getO2Conc_CallbackFunctionPointer(Mock.getO2Conc_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void getO2Conc_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, unsigned int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_getO2Conc_CALL_INSTANCE));
  CMOCK_getO2Conc_CALL_INSTANCE* cmock_call_instance = (CMOCK_getO2Conc_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.getO2Conc_CallInstance = CMock_Guts_MemChain(Mock.getO2Conc_CallInstance, cmock_guts_index);
  Mock.getO2Conc_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.getO2Conc_IgnoreBool = (char)1;
}

void getO2Conc_CMockStopIgnore(void)
{
  if(Mock.getO2Conc_IgnoreBool)
    Mock.getO2Conc_CallInstance = CMock_Guts_MemNext(Mock.getO2Conc_CallInstance);
  Mock.getO2Conc_IgnoreBool = (char)0;
}

void getO2Conc_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, unsigned int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_getO2Conc_CALL_INSTANCE));
  CMOCK_getO2Conc_CALL_INSTANCE* cmock_call_instance = (CMOCK_getO2Conc_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.getO2Conc_CallInstance = CMock_Guts_MemChain(Mock.getO2Conc_CallInstance, cmock_guts_index);
  Mock.getO2Conc_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void getO2Conc_AddCallback(CMOCK_getO2Conc_CALLBACK Callback)
{
  Mock.getO2Conc_IgnoreBool = (char)0;
  Mock.getO2Conc_CallbackBool = (char)1;
  Mock.getO2Conc_CallbackFunctionPointer = Callback;
}

void getO2Conc_Stub(CMOCK_getO2Conc_CALLBACK Callback)
{
  Mock.getO2Conc_IgnoreBool = (char)0;
  Mock.getO2Conc_CallbackBool = (char)0;
  Mock.getO2Conc_CallbackFunctionPointer = Callback;
}

unsigned long getO2Flow(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_getO2Flow_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_getO2Flow);
  cmock_call_instance = (CMOCK_getO2Flow_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.getO2Flow_CallInstance);
  Mock.getO2Flow_CallInstance = CMock_Guts_MemNext(Mock.getO2Flow_CallInstance);
  if (Mock.getO2Flow_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.getO2Flow_FinalReturn;
    Mock.getO2Flow_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.getO2Flow_CallbackBool &&
      Mock.getO2Flow_CallbackFunctionPointer != NULL)
  {
    unsigned long cmock_cb_ret = Mock.getO2Flow_CallbackFunctionPointer(Mock.getO2Flow_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.getO2Flow_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.getO2Flow_CallbackFunctionPointer(Mock.getO2Flow_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void getO2Flow_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, unsigned long cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_getO2Flow_CALL_INSTANCE));
  CMOCK_getO2Flow_CALL_INSTANCE* cmock_call_instance = (CMOCK_getO2Flow_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.getO2Flow_CallInstance = CMock_Guts_MemChain(Mock.getO2Flow_CallInstance, cmock_guts_index);
  Mock.getO2Flow_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.getO2Flow_IgnoreBool = (char)1;
}

void getO2Flow_CMockStopIgnore(void)
{
  if(Mock.getO2Flow_IgnoreBool)
    Mock.getO2Flow_CallInstance = CMock_Guts_MemNext(Mock.getO2Flow_CallInstance);
  Mock.getO2Flow_IgnoreBool = (char)0;
}

void getO2Flow_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, unsigned long cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_getO2Flow_CALL_INSTANCE));
  CMOCK_getO2Flow_CALL_INSTANCE* cmock_call_instance = (CMOCK_getO2Flow_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.getO2Flow_CallInstance = CMock_Guts_MemChain(Mock.getO2Flow_CallInstance, cmock_guts_index);
  Mock.getO2Flow_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void getO2Flow_AddCallback(CMOCK_getO2Flow_CALLBACK Callback)
{
  Mock.getO2Flow_IgnoreBool = (char)0;
  Mock.getO2Flow_CallbackBool = (char)1;
  Mock.getO2Flow_CallbackFunctionPointer = Callback;
}

void getO2Flow_Stub(CMOCK_getO2Flow_CALLBACK Callback)
{
  Mock.getO2Flow_IgnoreBool = (char)0;
  Mock.getO2Flow_CallbackBool = (char)0;
  Mock.getO2Flow_CallbackFunctionPointer = Callback;
}

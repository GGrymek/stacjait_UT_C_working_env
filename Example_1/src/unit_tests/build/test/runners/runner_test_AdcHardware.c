/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include "Types.h"
#include "AdcHardware.h"
#include "mock_AdcHardwareConfigurator.h"
#include "mock_AdcTemperatureSensor.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void testInitShouldDelegateToConfiguratorAndTemperatureSensor(void);
extern void testGetSampleCompleteShouldReturn_FALSE_WhenTemperatureSensorSampleReadyReturns_FALSE(void);
extern void testGetSampleCompleteShouldReturn_TRUE_WhenTemperatureSensorSampleReadyReturns_TRUE(void);
extern void testGetSampleShouldDelegateToAdcTemperatureSensor(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  mock_AdcHardwareConfigurator_Init();
  mock_AdcTemperatureSensor_Init();
}
static void CMock_Verify(void)
{
  mock_AdcHardwareConfigurator_Verify();
  mock_AdcTemperatureSensor_Verify();
}
static void CMock_Destroy(void)
{
  mock_AdcHardwareConfigurator_Destroy();
  mock_AdcTemperatureSensor_Destroy();
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, UNITY_LINE_TYPE line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("./test/test_AdcHardware.c");
  run_test(testInitShouldDelegateToConfiguratorAndTemperatureSensor, "testInitShouldDelegateToConfiguratorAndTemperatureSensor", 15);
  run_test(testGetSampleCompleteShouldReturn_FALSE_WhenTemperatureSensorSampleReadyReturns_FALSE, "testGetSampleCompleteShouldReturn_FALSE_WhenTemperatureSensorSampleReadyReturns_FALSE", 25);
  run_test(testGetSampleCompleteShouldReturn_TRUE_WhenTemperatureSensorSampleReadyReturns_TRUE, "testGetSampleCompleteShouldReturn_TRUE_WhenTemperatureSensorSampleReadyReturns_TRUE", 31);
  run_test(testGetSampleShouldDelegateToAdcTemperatureSensor, "testGetSampleShouldDelegateToAdcTemperatureSensor", 37);

  CMock_Guts_MemFreeFinal();
  return UnityEnd();
}
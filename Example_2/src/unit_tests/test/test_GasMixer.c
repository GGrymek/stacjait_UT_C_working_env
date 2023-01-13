#include "unity.h"
#include "GasMixer.h"
#include "mock_iO2Sensor.h"
#include "mock_AcmeO2Adapter.h"
#include "mock_UltimateO2Adapter.h"
#include "mock_AcmeO2SensorProxy.h"
#include "mock_UltimateO2SensorProxy.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_GasMixer_UpdateO2Parameters_CorrectFlow(void)
{
  int expected_o2_parameters_table_values[4] = {5, 3, 200, 66};
  int* actual_o2_parameters_table_values;
  AcmeO2Adapter* acmeO2Adapter;
  UltimateO2Adapter* ultimateO2Adapter;

  AcmeO2Adapter_Create_ExpectAndReturn(acmeO2Adapter);
  UltimateO2Adapter_Create_ExpectAndReturn(ultimateO2Adapter);
  AcmeO2Adapter_gimmeO2Conc_ExpectAndReturn(acmeO2Adapter, 5);
  AcmeO2Adapter_gimmeO2Flow_ExpectAndReturn(acmeO2Adapter, 3);
  UltimateO2Adapter_gimmeO2Conc_ExpectAndReturn(ultimateO2Adapter, 200);
  UltimateO2Adapter_gimmeO2Flow_ExpectAndReturn(ultimateO2Adapter, 66);

  actual_o2_parameters_table_values = GasMixer_UpdateO2Parameters();
  TEST_ASSERT_EQUAL_INT_ARRAY(expected_o2_parameters_table_values, actual_o2_parameters_table_values, 4);
}

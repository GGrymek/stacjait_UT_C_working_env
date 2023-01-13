#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_iO2Sensor.h"


static struct mock_iO2SensorInstance
{
  unsigned char placeHolder;
} Mock;

extern jmp_buf AbortFrame;

void mock_iO2Sensor_Verify(void)
{
}

void mock_iO2Sensor_Init(void)
{
  mock_iO2Sensor_Destroy();
}

void mock_iO2Sensor_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}


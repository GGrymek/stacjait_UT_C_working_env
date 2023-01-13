#include "GasMixer.h"

#define NUMBER_OF_PARAMETRERS 4U
#define O2CONC1_INDEX 0U
#define O2FLOW1_INDEX 1U
#define O2CONC2_INDEX 2U
#define O2FLOW2_INDEX 3U

static int O2_Parameters_Table[NUMBER_OF_PARAMETRERS] = {0, 0, 0, 0};

int* GasMixer_UpdateO2Parameters(void)
{
    int* o2_parameters_table_ptr = &O2_Parameters_Table[0];
    iO2Sensor sensor;
    AcmeO2Adapter* acmeO2Adapter = AcmeO2Adapter_Create();
    UltimateO2Adapter* ultimateO2Adapter = UltimateO2Adapter_Create();

    O2_Parameters_Table[O2CONC1_INDEX] = AcmeO2Adapter_gimmeO2Conc(acmeO2Adapter);
    O2_Parameters_Table[O2FLOW1_INDEX] = AcmeO2Adapter_gimmeO2Flow(acmeO2Adapter);

    O2_Parameters_Table[O2CONC2_INDEX] = UltimateO2Adapter_gimmeO2Conc(ultimateO2Adapter);
    O2_Parameters_Table[O2FLOW2_INDEX] = UltimateO2Adapter_gimmeO2Flow(ultimateO2Adapter);
    
    return o2_parameters_table_ptr;
}

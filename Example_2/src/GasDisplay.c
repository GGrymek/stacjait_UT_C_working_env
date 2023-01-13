#include "GasDisplay.h"

#define NUMBER_OF_PARAMETRERS 4U
#define O2CONC1_INDEX 0U
#define O2FLOW1_INDEX 1U
#define O2CONC2_INDEX 2U
#define O2FLOW2_INDEX 3U

static int O2_Parameters_Table[NUMBER_OF_PARAMETRERS] = {0, 0, 0, 0};

void GasDisplay_DisplayO2Parameters(void)
{
    printf("%d %d %d %d\n", O2_Parameters_Table[O2CONC1_INDEX],
                            O2_Parameters_Table[O2FLOW1_INDEX],
                            O2_Parameters_Table[O2CONC2_INDEX],
                            O2_Parameters_Table[O2FLOW2_INDEX]);
}

void GasDisplay_GetO2Parameters(int* parameters_table_ptr)
{
    memcpy(O2_Parameters_Table, parameters_table_ptr, sizeof(O2_Parameters_Table));
}

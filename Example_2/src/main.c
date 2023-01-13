#include "GasMixer.h"
#include "GasDisplay.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int* o2_parameters_table_ptr;
    o2_parameters_table_ptr = GasMixer_UpdateO2Parameters();
    GasDisplay_GetO2Parameters(o2_parameters_table_ptr);
    GasDisplay_DisplayO2Parameters();
    return 0;
}

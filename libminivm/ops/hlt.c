#include <stdlib.h>
#include <stdint.h>

#include "ops.h"

void inline vm_HLT(int32_t param1, int32_t param2)
{
    exit(EXIT_SUCCESS);
}

#include <stdlib.h>
#include <stdint.h>

#include "ops.h"

void inline vm_HLT(uint32_t param1, uint32_t param2)
{
    exit(EXIT_SUCCESS);
}

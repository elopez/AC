#include <minivm/language.h>
#include "ops/ops.h"
#include "regs.h"
#include "mem.h"

int run(Instruction * code)
{
    Instruction *line;

    /* Initialize registers */
    REG(SP) = MEM_SIZE - 1;
    REG(PC) = 0;

    while (1) {
        line = code + REG(PC);
        REG(PC)++;

        ops[INDEX(line)] (line->param1.value, line->param2.value);
    }
}

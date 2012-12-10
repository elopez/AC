#include <stdio.h>
#include "ops.h"

#define NULLS NULL, NULL, NULL, NULL

/* Must match the enum on <minivm/language.h> ! */
op ops[] = {
    OP_0(NOP),
    OP_2(MOV),
    OP_2(SW),
    OP_2(LW),
    OP_1(PUSH),
    OP_1(POP),
    OP_1(PRINT),
    OP_1(READ),
    OP_2(ADD),
    OP_2(SUB),
    OP_2(MUL),
    OP_2(DIV),
    OP_2(CMP),
    OP_1(JMP),
    OP_1(JMPE),
    OP_1(JMPL),
    OP_0(HLT),
};

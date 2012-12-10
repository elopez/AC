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
    NULLS,                      //ADD,
    NULLS,                      //SUB,
    NULLS,                      //MUL,
    NULLS,                      //DIV,
    NULLS,                      //CMP,
    NULLS,                      //JMP,
    NULLS,                      //JMPE,
    NULLS,                      //JMPL,
    OP_0(HLT),
};

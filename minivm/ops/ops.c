#include "ops.h"

#include <minivm/language.h>

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
    OP_2(AND),
    OP_2(OR),
    OP_2(XOR),
    OP_1(NOT),
    OP_1(CALL),
    OP_0(RET),
    OP_2(SHR),
    OP_2(SHL),
    OP_2(ROR),
    OP_2(ROL),
};

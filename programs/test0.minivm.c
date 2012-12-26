#include <minivm/language.h>

/* Prints 3 and exits */
Instruction code[3] = {
    Instruction(MOV, Operand(IMM, 3), Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(HLT)
};

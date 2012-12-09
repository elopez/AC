#include <minivm/language.h>

Instruction code[3] = {
    Instruction(MOV, Operand(IMM, 3), Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(HLT)
};

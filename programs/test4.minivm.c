#include <minivm/language.h>

Instruction code[15] = {
    Instruction(READ, Operand(IMM, 0x3)),
    Instruction(READ, Operand(REG, R0)),
    Instruction(PRINT, Operand(IMM, 0x3)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(HLT)
};

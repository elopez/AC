#include <minivm/language.h>

Instruction code[7] = {
    Instruction(READ, Operand(REG, R0)),
    Instruction(JMP, Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(HLT)
};

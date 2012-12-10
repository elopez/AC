#include <minivm/language.h>

Instruction code[7] = {
    Instruction(READ, Operand(REG, R0)),
    Instruction(CMP, Operand(IMM, 0), Operand(REG, R0)),
    Instruction(JMPL, Operand(IMM, 5)),
    Instruction(NOT, Operand(REG, R0)),
    Instruction(ADD, Operand(IMM, 1), Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(HLT)
};

#include <minivm/language.h>

Instruction code[6] = {
    Instruction(READ, Operand(REG, R0)),
    Instruction(READ, Operand(REG, R1)),
    Instruction(MUL, Operand(REG, R0), Operand(REG, R1)),
    Instruction(DIV, Operand(IMM, 10), Operand(REG, R1)),
    Instruction(PRINT, Operand(REG, R1)),
    Instruction(HLT)
};
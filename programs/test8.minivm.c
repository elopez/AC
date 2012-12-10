#include <minivm/language.h>

Instruction code[7] = {
    Instruction(READ, Operand(REG, R0)),
    Instruction(CMP, Operand(REG, R0), Operand(IMM, 3)),
    Instruction(JMPE, Operand(IMM, 5)),
    Instruction(JMPL, Operand(REG, ZERO)),
    Instruction(JMP, Operand(IMM, 6)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(HLT)
};

#include <minivm/language.h>

/* 3 will print a 3 and exit. Under 3 will ask for another number.
 * 4+ will exit immediately. */
Instruction code[7] = {
    Instruction(READ, Operand(REG, R0)),
    Instruction(CMP, Operand(REG, R0), Operand(IMM, 3)),
    Instruction(JMPE, Operand(IMM, 5)),
    Instruction(JMPL, Operand(REG, ZERO)),
    Instruction(JMP, Operand(IMM, 6)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(HLT)
};

#include <minivm/language.h>

/* Prints 1, 1<<31, 1<<30, ..., 8, 4, 2 and halts */
Instruction code[7] = {
    Instruction(MOV, Operand(IMM, 1), Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(ROR, Operand(IMM, 1), Operand(REG, R0)),
    Instruction(CMP, Operand(REG, R0), Operand(IMM, 1)),
    Instruction(JMPE, Operand(IMM, 6)),
    Instruction(JMP, Operand(IMM, 1)),
    Instruction(HLT),
};

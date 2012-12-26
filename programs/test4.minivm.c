#include <minivm/language.h>

/* Prints two numbers back from input. Uses memory and a register */
Instruction code[15] = {
    Instruction(READ, Operand(IMM, 0x3)),
    Instruction(READ, Operand(REG, R0)),
    Instruction(PRINT, Operand(IMM, 0x3)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(HLT)
};

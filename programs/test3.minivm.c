#include <minivm/language.h>

/* Prints 0 1 2 3 using the stack. */
Instruction code[15] = {
    Instruction(PUSH, Operand(IMM, 3)),
    Instruction(MOV, Operand(IMM, 2), Operand(REG, R0)),
    Instruction(PUSH, Operand(REG, R0)),
    Instruction(MOV, Operand(IMM, 1), Operand(REG, R1)),
    Instruction(PUSH, Operand(REG, R1)),
    Instruction(PUSH, Operand(REG, ZERO)),
    Instruction(POP, Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(POP, Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(POP, Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(POP, Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(HLT)
};

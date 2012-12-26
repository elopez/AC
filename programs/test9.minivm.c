#include <minivm/language.h>

/* N, N | 0xFF, (N | 0xFF) & 0xf0f0f0, ((N | 0xFF) & 0xf0f0f0) ^ N,
 * ~(((N | 0xFF) & 0xf0f0f0) ^ N) */
Instruction code[12] = {
    Instruction(READ, Operand(REG, R0)),
    Instruction(MOV, Operand(REG, R0), Operand(REG, R1)),
    Instruction(PRINT, Operand(REG, R1)),
    Instruction(OR, Operand(IMM, 0xff), Operand(REG, R1)),
    Instruction(PRINT, Operand(REG, R1)),
    Instruction(AND, Operand(IMM, 0xf0f0f0), Operand(REG, R1)),
    Instruction(PRINT, Operand(REG, R1)),
    Instruction(XOR, Operand(REG, R0), Operand(REG, R1)),
    Instruction(PRINT, Operand(REG, R1)),
    Instruction(NOT, Operand(REG, R1)),
    Instruction(PRINT, Operand(REG, R1)),
    Instruction(HLT)
};

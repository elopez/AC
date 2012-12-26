#include <minivm/language.h>

/* Reads two numbers from keyboard and prints A+B-10 */
Instruction code[6] = {
    Instruction(READ, Operand(REG, R0)),
    Instruction(READ, Operand(REG, R1)),
    Instruction(ADD, Operand(REG, R0), Operand(REG, R1)),
    Instruction(SUB, Operand(IMM, 10), Operand(REG, R1)),
    Instruction(PRINT, Operand(REG, R1)),
    Instruction(HLT)
};

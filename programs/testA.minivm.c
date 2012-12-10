#include <minivm/language.h>

Instruction code[12] = {
    Instruction(PRINT, Operand(REG, ZERO)),
    Instruction(CALL, Operand(IMM, 3)),
    Instruction(HLT),
    Instruction(MOV, Operand(IMM, 1), Operand(REG, R1)),
    Instruction(PRINT, Operand(REG, R1)),
    Instruction(MOV, Operand(IMM, 2), Operand(REG, R1)),
    Instruction(PRINT, Operand(REG, R1)),
    Instruction(RET),
};

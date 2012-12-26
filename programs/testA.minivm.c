#include <minivm/language.h>

/* Prints 0, 1, 2, 3 and halts. Uses CALL/RET */
Instruction code[12] = {
    Instruction(PRINT, Operand(REG, ZERO)),
    Instruction(CALL, Operand(IMM, 5)),
    Instruction(MOV, Operand(IMM, 3), Operand(REG, R2)),
    Instruction(PRINT, Operand(REG, R2)),
    Instruction(HLT),
    Instruction(MOV, Operand(IMM, 1), Operand(REG, R1)),
    Instruction(PRINT, Operand(REG, R1)),
    Instruction(MOV, Operand(IMM, 2), Operand(REG, R1)),
    Instruction(PRINT, Operand(REG, R1)),
    Instruction(RET),
};

#include <minivm/language.h>

Instruction code[4] = {
    Instruction(SW, Operand(IMM, 3), Operand(IMM, 0x123)),
    Instruction(LW, Operand(IMM, 0x123), Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(HLT)
};

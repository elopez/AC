#include <minivm/language.h>

Instruction code[3] = {
    Instruction(MOV, Operand(IMM, 3), Operand(IMM, 0x123)),
    Instruction(PRINT, Operand(IMM, 0x123)),
    Instruction(HLT)
};

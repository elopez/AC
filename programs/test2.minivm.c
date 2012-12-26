#include <minivm/language.h>

/* Prints 3 and exits. Stores it on memory, then retrieves it and uses
 * a register to print it. */
Instruction code[4] = {
    Instruction(SW, Operand(IMM, 3), Operand(IMM, 0x123)),
    Instruction(LW, Operand(IMM, 0x123), Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(HLT)
};

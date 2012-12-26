#include <minivm/language.h>

/* type 6 to exit immediately. 5 will print a 5. 4 will print two 4s.
 * 3 will print three 3s. 0 will ask for another number. */
Instruction code[7] = {
    Instruction(READ, Operand(REG, R0)),
    Instruction(JMP, Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(PRINT, Operand(REG, R0)),
    Instruction(HLT)
};

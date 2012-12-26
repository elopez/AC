#include <minivm/language.h>

/* Counts the number of set bits on a number */
Instruction code[14] = {
    Instruction(READ, Operand(REG, R0)),
    Instruction(MOV, Operand(IMM, 0), Operand(REG, R3)),
    Instruction(MOV, Operand(IMM, 1), Operand(REG, R2)), /* &bit */

    Instruction(CMP, Operand(IMM, 0), Operand(REG, R2)), /* jump out if OF'd */
    Instruction(JMPE, Operand(IMM, 12)),

    Instruction(MOV, Operand(REG, R0), Operand(REG, R1)), /* number */
    Instruction(AND, Operand(REG, R2), Operand(REG, R1)),
    Instruction(MUL, Operand(IMM, 2), Operand(REG, R2)), /* bit << 1 */
    Instruction(CMP, Operand(IMM, 0), Operand(REG, R1)), /* (number&bit) */
    Instruction(JMPE, Operand(IMM, 3)), /* bit is 0, try the next */

    Instruction(ADD, Operand(IMM, 1), Operand(REG, R3)), /* bit set, count it */
    Instruction(JMP, Operand(IMM, 3)),

    Instruction(PRINT, Operand(REG, R3)),
    Instruction(HLT)
};

#include <minivm/language.h>

Instruction code[29] = {
    /* Our array */
    Instruction(SW, Operand(IMM, 0), Operand(IMM, 0x20)),
    Instruction(SW, Operand(IMM, 1), Operand(IMM, 0x24)),
    Instruction(SW, Operand(IMM, 2), Operand(IMM, 0x28)),
    Instruction(SW, Operand(IMM, 3), Operand(IMM, 0x2C)),
    Instruction(SW, Operand(IMM, 4), Operand(IMM, 0x30)),
    Instruction(SW, Operand(IMM, 5), Operand(IMM, 0x34)),
    Instruction(SW, Operand(IMM, 6), Operand(IMM, 0x38)),
    Instruction(SW, Operand(IMM, 7), Operand(IMM, 0x3C)),
    Instruction(SW, Operand(IMM, 8), Operand(IMM, 0x40)),

    /* Array base */
    Instruction(MOV, Operand(IMM, 0x20), Operand(REG, R0)),

    /* Array len */
    Instruction(MOV, Operand(IMM, 9*4), Operand(REG, R1)),

    Instruction(PUSH, Operand(REG, R1)),
    Instruction(PUSH, Operand(REG, R0)),
    Instruction(CALL, Operand(IMM, 16)), /* sumArray */

    Instruction(PRINT, Operand(REG, R2)),

    Instruction(HLT),

    /* FUNCTION: sumArray */
    Instruction(POP, Operand(REG, R3)), /* return addr */
    Instruction(POP, Operand(REG, R0)), /* Array ptr */
    Instruction(POP, Operand(REG, R1)), /* Array length */
    Instruction(MOV, Operand(IMM, 0), Operand(REG, R2)), /* result */
    Instruction(PUSH, Operand(REG, R3)), /* return addr */

    Instruction(CMP, Operand(IMM, 0), Operand(REG, R1)),
    Instruction(JMPE, Operand(IMM, 28)),

    Instruction(LW, Operand(REG, R0), Operand(REG, R3)), /* add *ptr */
    Instruction(ADD, Operand(REG, R3), Operand(REG, R2)),

    Instruction(SUB, Operand(IMM, 4), Operand(REG, R1)), /* Adjust pointer */
    Instruction(ADD, Operand(IMM, 4), Operand(REG, R0)),

    Instruction(JMP, Operand(IMM, 21)),

    Instruction(RET),
};

#include <minivm/language.h>

#ifndef __OPS_H__
#define __OPS_H__

typedef void (*op) (uint32_t param1, uint32_t param2);

/* Operations with no arguments */
#define DECLARE_OP_0(name) \
    void inline vm_ ## name(uint32_t param1, uint32_t param2)

/* Operations with one argument */
#define DECLARE_OP_1(name) \
    void inline vm_ ## name ## _IMM(uint32_t param1, uint32_t param2); \
    void inline vm_ ## name ## _REG(uint32_t param1, uint32_t param2)

/* Operations with two arguments */
#define DECLARE_OP_2(name) \
    void inline vm_ ## name ## _IMM_IMM(uint32_t param1, uint32_t param2); \
    void inline vm_ ## name ## _IMM_REG(uint32_t param1, uint32_t param2); \
    void inline vm_ ## name ## _REG_IMM(uint32_t param1, uint32_t param2); \
    void inline vm_ ## name ## _REG_REG(uint32_t param1, uint32_t param2)

/* table entry generators for ops */
#define OP_0(name) vm_ ## name, vm_ ## name, vm_ ## name, vm_ ## name
#define OP_1(name) vm_ ## name ## _IMM, vm_ ## name ## _IMM, vm_ ## name ## _REG, vm_ ## name ## _REG
#define OP_2(name) vm_ ## name ## _IMM_IMM, vm_ ## name ## _IMM_REG, vm_ ## name ## _REG_IMM, vm_ ## name ## _REG_REG

/* Operation table */
extern op ops[];

/* Instruction offset calculator for operation table */
#define INDEX(instr) (((instr)->op << 2) | ((instr)->param1.type << 1) | (instr)->param2.type)

#define INVALID_INSTRUCTION() do { \
    fprintf(stderr, "An invalid instruction was detected. The machine will now abort.\n"); \
    abort(); \
} while (0);

/* Supported opperations */
DECLARE_OP_0(NOP);
DECLARE_OP_2(MOV);
DECLARE_OP_2(SW);
DECLARE_OP_2(LW);
DECLARE_OP_1(PRINT);
DECLARE_OP_0(HLT);

#endif

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include <minivm/language.h>

#ifndef __OPS_H__
#define __OPS_H__

typedef void (*op) (int32_t param1, int32_t param2);

/* Operations with no arguments */
#define DECLARE_OP_0(name) \
    inline void vm_ ## name(int32_t param1, int32_t param2)

/* Operations with one argument */
#define DECLARE_OP_1(name) \
    inline void vm_ ## name ## _IMM(int32_t param1, int32_t param2); \
    inline void vm_ ## name ## _REG(int32_t param1, int32_t param2)

/* Operations with two arguments */
#define DECLARE_OP_2(name) \
    inline void vm_ ## name ## _IMM_IMM(int32_t param1, int32_t param2); \
    inline void vm_ ## name ## _IMM_REG(int32_t param1, int32_t param2); \
    inline void vm_ ## name ## _REG_IMM(int32_t param1, int32_t param2); \
    inline void vm_ ## name ## _REG_REG(int32_t param1, int32_t param2)

/* table entry generators for ops */
#define OP_0(name) vm_ ## name, vm_ ## name, vm_ ## name, vm_ ## name
#define OP_1(name) vm_ ## name ## _IMM, vm_ ## name ## _IMM, vm_ ## name ## _REG, vm_ ## name ## _REG
#define OP_2(name) vm_ ## name ## _IMM_IMM, vm_ ## name ## _IMM_REG, vm_ ## name ## _REG_IMM, vm_ ## name ## _REG_REG

/* Handy macro to mark parameters as unused */
#if defined(__GNUC__)
# define unused __attribute__((unused))
#else
# define unused
#endif

/* Operation table */
extern op ops[];

/* Instruction offset calculator for operation table */
#define INDEX(instr) (((instr)->op << 2) | ((instr)->param1.type << 1) | (instr)->param2.type)

#define INVALID_INSTRUCTION() do { \
    fprintf(stderr, "An invalid instruction was detected. The machine will now abort.\n"); \
    abort(); \
} while (0)

/* Supported opperations */
DECLARE_OP_0(NOP);
DECLARE_OP_2(MOV);
DECLARE_OP_2(SW);
DECLARE_OP_2(LW);
DECLARE_OP_1(PUSH);
DECLARE_OP_1(POP);
DECLARE_OP_1(PRINT);
DECLARE_OP_1(READ);
DECLARE_OP_2(ADD);
DECLARE_OP_2(SUB);
DECLARE_OP_2(MUL);
DECLARE_OP_2(DIV);
DECLARE_OP_2(CMP);
DECLARE_OP_1(JMP);
DECLARE_OP_1(JMPE);
DECLARE_OP_1(JMPL);
DECLARE_OP_0(HLT);

/* Extended operations */
DECLARE_OP_2(AND);
DECLARE_OP_2(OR);
DECLARE_OP_2(XOR);
DECLARE_OP_1(NOT);
DECLARE_OP_1(CALL);
DECLARE_OP_0(RET);
DECLARE_OP_2(SHR);
DECLARE_OP_2(SHL);
DECLARE_OP_2(ROR);
DECLARE_OP_2(ROL);

#endif

#include <stdint.h>

#ifndef __LANGUAGE_H__
#define __LANGUAGE_H__

/* Instruction set */
enum {
	NOP,
	MOV,
	SW,
	LW,
	PUSH,
	POP,
	PRINT,
	READ,
	ADD,
	SUB,
	MUL,
	DIV,
	CMP,
	JMP,
	JMPE,
	JMPL,
	HLT,
};

/* Parameter types */
enum {
	IMM,
	REG,
};

/* Machine Registers */
enum {
	ZERO,
	PC,
	SP,
	R0,
	R1,
	R2,
	R3,
	FLAGS,
};

/* Single instruction definition */
#define INSTRUCTION Instruction
typedef struct {
	uint8_t	op;
	struct param {
		uint32_t value;
		uint8_t type: 1;
	} param1, param2;
} INSTRUCTION;

/* User-friendly instruction definition macros */
#define Operand(argtype, argvalue) { .value = argvalue, .type = argtype }
#define Instruction(argop, ...) { .op = argop, __VA_ARGS__ }

/* Execute a program in our mini VM */
int run(Instruction *code);

#endif

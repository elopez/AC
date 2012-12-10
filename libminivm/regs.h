#include <stdint.h>

#ifndef __REGS_H__
#define __REGS_H__

/* Machine registers. FLAGS is the last one on the enum */
uint32_t regs[FLAGS + 1];

/* User-friendly macro to access registers */
#define REG(i)  regs[(i)]

#endif

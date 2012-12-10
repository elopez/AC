#include <stdint.h>

#include <minivm/language.h>

#ifndef __REGS_H__
#define __REGS_H__

/* Machine registers. FLAGS is the last one on the enum */
int32_t regs[FLAGS + 1];

/* User-friendly macro to access registers */
#define REG(i)          regs[(i)]

#define FLAGS_ISSET(i)  !!(regs[FLAGS] & (i))
#define FLAGS_SET(i)    regs[FLAGS] |= (i)
#define FLAGS_CLEAR()   regs[FLAGS] = 0

#endif

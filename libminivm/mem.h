#include <stdint.h>

#ifndef __MEM_H__
#define __MEM_H__

/* Machine memory in bytes (640k default) */
#ifndef MEM_SIZE
#define MEM_SIZE    (640 * 1024)
#endif

/* Machine memory */
char mem[MEM_SIZE];

/* User-friendly macro to access bytes */
#define MEM(i)      mem[(i)]

/* User-friendly macro to access 32 bits */
#define MEM32(i)    *(uint32_t*)(mem + (i))

#endif

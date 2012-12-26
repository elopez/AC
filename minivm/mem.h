#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

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
#define MEM32(i)    *(int32_t*)(mem + (i))

#define MEMORY_CHECK(address) do { \
    if ((address) >= MEM_SIZE) { \
        fprintf(stderr, "An invalid memory address was detected. The machine will now abort.\n"); \
        abort(); \
    } \
} while(0)


#endif

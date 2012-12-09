#include <stdint.h>

#define MEM_SIZE (640 * 1024)

char mem[MEM_SIZE];

#define MEM(i)      mem[(i)]
#define MEM32(i)    *(uint32_t*)(mem + (i))

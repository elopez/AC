#include <stdio.h>
#include <minivm/language.h>

extern Instruction code[];

int main(void)
{
	return run(code);
}

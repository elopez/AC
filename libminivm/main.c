#include <stdio.h>
#include <dlfcn.h>

#include <minivm/language.h>

int main(int argc, char *argv[])
{
    void *handle;
    Instruction *code;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s program.minivm\n", argv[0]);
        return 0;
    }

    handle = dlopen(argv[1], RTLD_NOW);
    if (!handle) {
        fprintf(stderr, "Error loading %s.\n", argv[1]);
        return 1;
    }

    code = dlsym(handle, "code");
    if (!code) {
        fprintf(stderr, "Error loading code from %s.\n", argv[1]);
        return 1;
    }

    return run(code);
}

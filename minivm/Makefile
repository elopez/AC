CC=gcc
INCLUDES=-I../include/
OUT=../out

LDFLAGS= -ldl
CFLAGS=$(INCLUDES)

ifeq ($(DEBUG),)
CFLAGS+=-O2
else
CFLAGS+=-O0 -g -DWITH_MEMORY_CHECK
endif

.PHONY: all outdir clean build
all: outdir build
build: $(OUT)/minivm

outdir:
	@mkdir -p $(OUT)

clean:
	@rm -rf $(OUT)

$(OUT)/minivm: main.c minivm.c ops/*.c
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $^

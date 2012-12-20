CC=gcc
INCLUDES=-I../include/
CFLAGS= -O0 -g $(INCLUDES)
LDFLAGS= -ldl
OUT=../out

all: outdir build
build: $(OUT)/minivm

outdir:
	@mkdir -p $(OUT)

clean:
	@rm -r $(OUT)

$(OUT)/minivm: main.c minivm.c ops/*.c
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $^

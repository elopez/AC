CC=gcc
INCLUDES=-I../include/
CFLAGS= -fPIC -O0 -g -Winline $(INCLUDES)
LDFLAGS= -shared
OUT=../out

all: outdir build
build: $(OUT)/libminivm.so

outdir:
	@mkdir -p $(OUT)

clean:
	@rm -r $(OUT)

$(OUT)/libminivm.so: minivm.c ops/*.c
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $^

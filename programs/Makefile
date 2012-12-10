CC=gcc
INCLUDES=-I../include/
CFLAGS=$(INCLUDES)
LDFLAGS=-lminivm -Wl,-rpath,$(shell readlink -f $(OUT)) -L$(OUT)
OUT=../out

all: outdir build
build: $(OUT)/test0.minivm $(OUT)/test1.minivm $(OUT)/test2.minivm \
       $(OUT)/test3.minivm

outdir:
	@mkdir -p $(OUT)

clean:
	@rm -r $(OUT)

$(OUT)/%.minivm: $(OUT)/libminivm.so bootstrap.c %.minivm.c
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $(filter-out $<, $^)

$(OUT)/libminivm.so:
	make -C ../libminivm/

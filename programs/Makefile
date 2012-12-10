CC=gcc
INCLUDES=-I../include/
CFLAGS=$(INCLUDES)
LDFLAGS=-lminivm -Wl,-rpath,$(shell readlink -f $(OUT)) -L$(OUT)
OUT=../out

all: outdir build
build: $(OUT)/test0.minivm $(OUT)/test1.minivm $(OUT)/test2.minivm \
       $(OUT)/test3.minivm $(OUT)/test4.minivm $(OUT)/test5.minivm \
       $(OUT)/test6.minivm $(OUT)/test7.minivm $(OUT)/test8.minivm \
       $(OUT)/test9.minivm $(OUT)/testA.minivm \
       $(OUT)/tptest1.minivm $(OUT)/tptest2.minivm

outdir:
	@mkdir -p $(OUT)

clean:
	@rm -r $(OUT)

$(OUT)/%.minivm: $(OUT)/libminivm.so bootstrap.c %.minivm.c
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $(filter-out $<, $^)

$(OUT)/libminivm.so:
	make -C ../libminivm/

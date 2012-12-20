CC=gcc
INCLUDES=-I../include/
OUT=../out

CFLAGS=$(INCLUDES)
LDFLAGS=-shared

.PHONY: all outdir clean build
all: outdir build
build: $(OUT)/test0.minivm $(OUT)/test1.minivm $(OUT)/test2.minivm \
       $(OUT)/test3.minivm $(OUT)/test4.minivm $(OUT)/test5.minivm \
       $(OUT)/test6.minivm $(OUT)/test7.minivm $(OUT)/test8.minivm \
       $(OUT)/test9.minivm $(OUT)/testA.minivm \
       $(OUT)/tptest1.minivm $(OUT)/tptest2.minivm $(OUT)/tptest3.minivm

outdir:
	@mkdir -p $(OUT)

clean:
	@rm -rf $(OUT)

$(OUT)/%.minivm: %.minivm.c
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $^

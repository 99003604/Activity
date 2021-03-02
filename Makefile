TARGET=sall.out
OBJS=test1.o src/bitmask.o src/mystring.o src/myutils.o

TOPDIR=${PWD}
CFLAGS=-I${TOPDIR}/include
LDFLAGS=lsimple
LIBPATH=${PWD}

all:sall.out

sall.out:test1.o lsimple.a
	gcc -L${LIBPATH} $< -o $@ ${LDFLAGS} -I inc
libsimple.a:src/bitmask.o src/mystring.o src/myutils.o
	ar rc $@ $^
%.o:src/%.c include/bitmask.h include/mystring.h include/myutils.h

test.o: test1.c include/bitmask.h include/mystring.h include/myutils.h

clean:
	rm -rf *.a *.o src/*.o ${TARGET}

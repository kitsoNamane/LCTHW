CC=clang # compiler

CFLAGS=-Wall -g

TARGET=main # executable

all:
	$(CC) $(CFLAGS) *.c -o $(TARGET)

clean:
	rm -f *.o $(TARGET)

git:
	git add Makefile *.c

debug:
	gdb --batch --ex run --ex bt --ex q --args ./main
CC=clang # compiler

CFLAGS=-Wall -g

TARGET=main # executable

# we can add *.h for header files later

all:
	$(CC) $(CFLAGS) *.c -o $(TARGET)

clean:
	rm -f *.o $(TARGET)
	$(CC) $(CFLAGS) *.c -o $(TARGET)

git:
	$(shell git add Makefile *.c)

debug:
	gdb --batch --ex run --ex bt --ex q --args main
CC=clang # compiler

CFLAGS=-Wall -g

TARGET=main # executable

# we can add *.h for header files later
git:
	$(shell git add Makefile *.c)

all:
	$(CC) $(CFLAGS) *.c -o $(TARGET)

clean:
	rm -f *.o $(TARGET)

CC = gcc
CFLAGS = -Wall -Wextra

all: fib_test

fib_test: main.c fibonacci.c cache.c
	$(CC) $(CFLAGS) -o fib_test main.c fibonacci.c cache.c

clean:
	rm -f fib_test

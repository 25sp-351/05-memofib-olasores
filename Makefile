CC = gcc
CFLAGS = -Wall -Wextra -g
LDFLAGS =

SRCS = fibonacci.c test_fibonacci.c
OBJS = $(SRCS:.c=.o)
TARGET = test_fibonacci

.PHONY: all clean test

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

test: $(TARGET)
	./test.sh
# Makefile for numberGen.c

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -O2 -std=c11


all:
	$(CC) $(CFLAGS) -o avg avg.c
	$(CC) $(CFLAGS) -o avgFromInput avgFromInput.c
	$(CC) $(CFLAGS) -o avgFromBinaryInput avgFromBinaryInput.c
	$(CC) $(CFLAGS) -o numberGenASCII numberGenASCII.c
	$(CC) $(CFLAGS) -o numberGenAsciiStdOut numberGenAsciiStdOut.c
	$(CC) $(CFLAGS) -o numberGenBinary numberGenBinary.c
	$(CC) $(CFLAGS) -o numberGenBinaryStdOut numberGenBinaryStdOut.c
	$(CC) $(CFLAGS) -o rng rng.c
	$(CC) $(CFLAGS) -o stdDev stdDev.c


clean:
	rm -f *.o
	rm -f *.out
	rm -f avg avgFromInput avgFromBinaryInput gen_binary numberGenASCII numberGenAsciiStdOut numberGenBinary numberGenBinaryStdOut rng stdDev



CC=gcc -Wall
CFLAGS=-Wall -c
C99=-std=c99
LINKERS=-lm

partition:
	$(CC) $(C99) -o partition.exe partition.c

bit_count:
	$(CC) $(C99) -o bit_count.exe 0bit_count.c

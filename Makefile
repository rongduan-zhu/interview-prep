CC=gcc -Wall
CFLAGS=-Wall -c
C99=-std=c99
LINKERS=-lm

partition:
	$(CC) $(C99) -o partition.exe partition.c

CC=gcc -Wall
CFLAGS=-Wall -c
C99=-std=c99
LINKERS=-lm

partition:
	$(CC) $(C99) -o partition.exe partition.c

bit_count:
	$(CC) $(C99) -o bit_count.exe 0bit_count.c

valid_ip:
	$(CC) $(C99) -o valid_ip.exe valid_ip.c

remove_dup:
	$(CC) $(C99) -o remove_dup.exe remove_dup.c

palindrome:
	$(CC) $(C99) -o palindrome.exe palindrome.c

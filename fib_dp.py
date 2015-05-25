#!/usr/bin/env python
# Find the nth fibonacci, dp approach

def fib(n, fib_table):
    if n < 0:
        return 0

    if n in fib_table:
        return fib_table[n]

    fib_table[n - 1] = fib(n - 1, fib_table)
    fib_table[n - 2] = fib(n - 2, fib_table)
    fib_table[n] = fib_table[n - 1] + fib_table[n - 2]
    return fib_table[n]

if __name__ == '__main__':
    fib_table = {0: 0, 1: 1}

    print fib(1, fib_table)
    print fib(2, fib_table)
    print fib(4, fib_table)
    print fib(8, fib_table)
    print fib(16, fib_table)
    print fib(32, fib_table)
    print fib(64, fib_table)

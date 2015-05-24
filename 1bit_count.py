#!/usr/bin/env python
# Given an integer as input, return the number of 1s in the input's binary form.

def count_set_bit(number):
    if not isinstance(number, int):
        return None
    count = 0

    while number:
        number &= number - 1
        count += 1

    return count

if __name__ == '__main__':
    print '{} size: {}'.format(bin(1), count_set_bit(1))
    print '{} size: {}'.format(bin(2), count_set_bit(2))
    print '{} size: {}'.format(bin(3), count_set_bit(3))
    print '{} size: {}'.format(bin(4), count_set_bit(4))
    print '{} size: {}'.format(bin(5), count_set_bit(5))
    print '{} size: {}'.format(bin(6), count_set_bit(6))
    print '{} size: {}'.format(bin(7), count_set_bit(7))

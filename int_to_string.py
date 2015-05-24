#!/usr/bin/env python
# Given an integer number, implement the toString() function of that number.

def to_string(number):
    if number == 0:
        return '0'

    signed = True if number < 0 else False
    number = -number if signed else number
    number_str = ""

    while number > 0:
        digit = number % 10
        number_str = chr(digit + ord('0')) + number_str
        number /= 10

    return "{}{}".format('-' if signed else '', number_str)

if __name__ == '__main__':
    print to_string(123)
    print to_string(0)
    print to_string(-32)

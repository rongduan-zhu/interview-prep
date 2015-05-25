#!/usr/bin/env python
# Determine if a String is an int or a double

import re

number_prog = re.compile(r'^\d+$')

def int_or_double(number):
    segments = number.split('.')

    if len(segments) > 2:
        return "NaN"

    for segment in segments:
        if not number_prog.match(segment):
            return "Nan"

    return "Int" if len(segments) == 1 else "Double"

def print_testcase(number):
    print "{} is {}".format(number, int_or_double(number))

if __name__ == '__main__':
    print_testcase("12.5")
    print_testcase("12.55512321")
    print_testcase("41414123")
    print_testcase("0")
    print_testcase("0.0")
    print_testcase("ab123.c123")
    print_testcase("12c.d23")

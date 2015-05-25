#!/usr/bin/env python

# Fizz-Buzz test
def fizz_buzz():
    for i in xrange(1, 101):
        if i % 3 == 0 and i % 5 == 0:
            print "FizzBuzz"
        elif i % 5 == 0:
            print "Buzz"
        elif i % 3 == 0:
            print "Fizz"
        else:
            print i

if __name__ == '__main__':
    fizz_buzz()

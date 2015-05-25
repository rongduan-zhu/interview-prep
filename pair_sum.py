#!/usr/bin/env python
# Find pairs in an integer array whose sum is equal to 10

def pair_sum(arr, total):
    lookup = {}

    for number in arr:
        if total - number in lookup:
            return True
        lookup[number] = True

    return False

if __name__ == '__main__':
    print pair_sum([1,2,3,4], 10)
    print pair_sum([1,2,3,4,5,6,7], 10)

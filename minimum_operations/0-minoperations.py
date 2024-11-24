#!/usr/bin/python3
"""
This module provides a function `minOperations` that
calculates the minimum number of operations
needed to result in exactly n 'H' characters in a file.
The operations include copying all characters
and pasting them.
"""


def minOperations(n):
    if n <= 1:
        return 0
    operations = 0
    divions = 2

    while n > 1:
        while n % divions == 0:
            operations += divions
            n = n / divions
        divions += 1

    return operations

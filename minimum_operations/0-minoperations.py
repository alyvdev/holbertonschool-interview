#!/usr/bin/python3
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
import sys
import math

def find_lowest_factor(n):
    for i in range(1, int(math.sqrt(n))):
        j = i+1
        if n % j == 0:
            return j
    return n


def find_k(x):
    k = 0
    curr = x
    while curr != 1:
        low = find_lowest_factor(curr)
        k += 1
        curr = curr/low
    return k

x = int(sys.stdin.readline())


sys.stdout.write(str(find_k(x)))

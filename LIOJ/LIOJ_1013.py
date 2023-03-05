import sys

lines = sys.stdin.read().splitlines()


def func(n):
    a, b = 1, 1
    while n > 1:
        a, b = b, a+b
        n -= 1
    return b


print(func(int(lines[0])-1))
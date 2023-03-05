import sys

lines = sys.stdin.read().splitlines()


def get_factors(n):
    return [i for i in range(1, n) if n % i == 0]


for line in lines:
    if line == "0":
        break
    x = int(line)
    y = sum(get_factors(x))

    if sum(get_factors(y)) == x:
        print(y)
    else:
        print("QQ")
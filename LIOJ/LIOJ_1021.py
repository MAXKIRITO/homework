import sys

str = sys.stdin.readlines()
str = [s.strip('\n') for s in str]

n = int(str[0])

for i in range(n):
    for j in range(i+1):
        print("*", end="")
    print()
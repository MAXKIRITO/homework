import sys

lines = sys.stdin.read().splitlines()
n = int(lines[0])
c = 0
for i in range(n):
    c += 1
    print(' '*(n-c)+'*'*(1+(2*i)))

for i in range(n-1):
    print(' '*(n-1)+'|')
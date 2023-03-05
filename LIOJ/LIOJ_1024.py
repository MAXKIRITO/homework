import sys

lines = sys.stdin.read().splitlines()
n = lines[0]
m = lines[1]
for i in range(1, int(n)+1):
    for j in range(1, int(m)+1):
        print(str(i)+'*'+str(j)+'='+str(i*j))
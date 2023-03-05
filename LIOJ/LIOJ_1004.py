import sys
str = sys.stdin.readlines()
str = [s.strip('\n') for s in str]

n = int(str[0])

for i in range(n):
    a,b,c = str[i+1].split()
    a = int(a)
    b = int(b)
    c = int(c)
    if a == b :
        print('DRAW')
    elif a > b:
        if c == 1:
            print('A')
        else:  
            print('B')
    elif b > a:
        if c == 1:
            print('B')
        else:
            print('A')
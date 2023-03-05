import sys

lines = sys.stdin.read().splitlines()
lines.pop(0)

string = ("".join(lines))
a = string.count("A")
b = string.count("B")

if a == b or a == 0 or b == 0:
    print("PEACE")
else:
    for i, j in enumerate(string):
        if j == ("A" if a < b else "B"):
            print(i+1)
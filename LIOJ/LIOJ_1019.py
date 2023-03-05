import sys

lines = sys.stdin.read().splitlines()

w, h = map(int, lines.pop(0).split())

wall = ["#"]*(w+2)
maze = [wall]
for line in lines:
    temp = ["#"]
    temp.extend(list(line))
    temp.append("#")
    maze.append(temp)
maze.append(wall)

c = 0
for y in range(h+2):
    for x in range(w+2):
        if maze[y][x] != ".":
            continue
        if maze[y-1][x] == ".":
            c += 1
        elif maze[y+1][x] == ".":
            c += 1
        elif maze[y][x-1] == ".":
            c += 1
        elif maze[y][x+1] == ".":
            c += 1

print(c-1)
import sys

lines = sys.stdin.read().splitlines()

# 劃出座位
seats = [i for i in range(1, int(lines.pop(0))+1)]
lines.pop(0)  # 佔走的數量

# 移除被佔座位
for i in lines:
    seats.remove(int(i))

# 計算能坐的數量
c = 0
for i in seats:
    if i+2 in seats:  # 上方為空
        c += 1
    if i-2 in seats:  # 下方為空
        c += 1
    if i-1+(2*(i % 2)) in seats:  # 奇數看右 偶數看左
        c += 1

print(c//2)  # 會同樣搭配會多算一次故/2
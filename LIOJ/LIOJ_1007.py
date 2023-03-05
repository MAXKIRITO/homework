import sys

lines = sys.stdin.read().splitlines()

lines.pop(0)  # 資料數 不重要 直接pop

highest = 0
fuck_boy = []
for line in lines:
    name, score = line.split()
    score = int(score)
    if score > highest:  # 更新標準
        fuck_boy.clear()
        highest = score
    if score == highest:  # 加入渣男名單
        fuck_boy.append(name)
for i in fuck_boy:
    print(i)
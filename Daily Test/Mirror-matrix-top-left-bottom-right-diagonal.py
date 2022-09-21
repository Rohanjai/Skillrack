r, c = map(int, input().split())
matrix = [input().split() for _ in range(r)]
x1 = r - 1
y1 = 0
x2 = 0
y2 = c - 1
while x1 >= x2 and y1 <= y2:
    t = 0
    while x1 + t < r and y1 + t < c:
        matrix[x1 + t][y1 + t], matrix[x2 + t][y2 + t] = matrix[x2 + t][y2 + t], matrix[x1 + t][y1 + t]
        t += 1
    if x1 == 0:
        y1 += 1
    else:
        x1 -= 1
    if y2 == 0:
        x2 += 1
    else:
        y2 -= 1
for row in matrix:
    print(*row)
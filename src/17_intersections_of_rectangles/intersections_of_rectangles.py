def read_rect():
    x1, y1, x2, y2 = map(int, input().split())
    return (min(x1, x2), min(y1, y2), max(x1, x2), max(y1, y2))

ax1, ay1, ax2, ay2 = read_rect()
bx1, by1, bx2, by2 = read_rect()

rx1 = max(ax1, bx1)
ry1 = max(ay1, by1)
rx2 = min(ax2, bx2)
ry2 = min(ay2, by2)

s = max(0, rx2 - rx1) * max(0, ry2 - ry1)

print(s)
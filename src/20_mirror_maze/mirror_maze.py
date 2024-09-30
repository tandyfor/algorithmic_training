DELTA = ((0, 1), (1, 0), (0, -1), (-1, 0))

n, m = map(int, input().split())
a = [input() for _ in range(n)]

def ray():
  x, y = 0, 0
  d = 0
  while True:
    if a[x][y] == '/':
      d ^= 3
    elif a[x][y] == '\\':
      d ^= 1
    nx = x + DELTA[d][0]
    ny = y + DELTA[d][1]
    if (nx < 0 or ny < 0 or nx >= n or ny >= m):
      return x, y
    x, y = nx, ny

x, y = ray()
print(x + 1, y + 1)

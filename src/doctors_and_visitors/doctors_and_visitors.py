n = int(input())
visitors = [tuple(map(int, input().split())) for _ in range(n)]

a = 0
b = 0
result = ""

for l, r in visitors:
    if l - a >= 0 and (l - b < 0 or l - a <= l - b):
        a = r
        result += 'A'
    elif l - b >= 0 and (l - a < 0 or l - a > l - b):
        b = r
        result += 'B'
    else:
        result = "No solution"
        break


print(result)
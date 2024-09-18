a, b = map(int, input().split())
a //= 10
b //= 10
c = (a + b) // 3
print(min(a, b, c))
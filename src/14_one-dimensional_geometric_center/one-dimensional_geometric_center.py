n = int(input())
x = map(int, input().split())
result = list(sorted(x))[n // 2]
print(result)

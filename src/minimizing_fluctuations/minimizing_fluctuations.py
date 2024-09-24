n = int(input())
a = list(map(int, input().split()))

b = list(sorted((h, i) for i, h in enumerate(a)))

print(a)
print(b)

ans = b[::2] + b[1::2][::-1]
ans = list(i for _, i in ans)
print(*ans)
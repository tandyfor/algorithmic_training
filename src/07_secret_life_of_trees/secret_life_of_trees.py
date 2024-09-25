n = int(input())
a = list(map(int, input().split()))

a.sort()
ans = max(cur - i for i, cur in enumerate(a))
print(ans)
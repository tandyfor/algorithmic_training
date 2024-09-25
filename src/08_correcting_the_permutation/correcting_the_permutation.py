n = int(input())
a = list(map(int, input().split()))

free = set(range(1, n + 1))
free -= set(a)

print(len(free))
used = set()
for i in range(n):
    if a[i] > n or a[i] in used:
        a[i] = free.pop()
    used.add(a[i])

print(*a)
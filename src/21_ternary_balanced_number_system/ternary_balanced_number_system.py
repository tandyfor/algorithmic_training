n = int(input())

ans = "" if n else "0"
while n:
  cur = n % 3
  n //= 3
  ans = "0+-"[cur] + ans
  if cur == 2:
    n += 1

print(ans)

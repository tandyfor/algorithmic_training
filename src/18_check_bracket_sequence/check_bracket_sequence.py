def valid(s):
  balance = 0
  for c in s:
    if c == '(':
      balance += 1
    else:
      balance -= 1
      if balance < 0:
        return False
        
  return balance == 0

s = input()
print('YES' if valid(s) else 'NO')

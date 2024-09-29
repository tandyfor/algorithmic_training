def valid(s):
  stack = []
  for c in s:
    if c in ('(', '['):
      stack.append(c)
      continue
    if not stack:
      return False
    need = '(' if c == ')' else '['
    if stack.pop() != need:
      return False
  return not stack

s = input()
print('YES' if valid(s) else 'NO')

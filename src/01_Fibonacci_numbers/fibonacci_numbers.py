n = int(input())

temp = 0
a = 0
b = 1

for i in range(1, n):
    temp = a + b
    a = b
    b = temp

print(b)
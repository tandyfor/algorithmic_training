numbers = list(map(lambda x: int(x) - 1, input().split()))
result = 0
for i in numbers:
    if i == -1:
        continue
    go = i
    while go > -1:
        temp = numbers[go]
        numbers[go] = -1
        go = temp
        if go == i:
            result += 1
            numbers[go] = -1
            break

print(result)

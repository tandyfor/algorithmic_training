n = int(input())
numbers = list(map(int, input().split()))

numbers.sort()
res_1 = numbers[0] * numbers[1]
res_2 = numbers[0] * numbers[-1]
res_3 = numbers[-1] * numbers[-2]

print(min(res_1, res_2, res_3))
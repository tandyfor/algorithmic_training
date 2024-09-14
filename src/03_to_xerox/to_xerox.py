n, k = map(int, input().split())
i = max(n // k, 1)
result_1 = abs(n - i * k)
i += 1
result_2 = abs(n - i * k)
print(min(result_1, result_2))
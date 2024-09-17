from collections import Counter

elements = list(map(int, input().split()))
counter = Counter(elements)
result = max(elements) == len(elements) and max(counter.values()) == 1
print("OK" if result else "BAD")
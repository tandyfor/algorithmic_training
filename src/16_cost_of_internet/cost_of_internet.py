DAYS = ['Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sut', 'San']

n = int(input())
costs = []
for i in range(n):
    day, hour, cost = input().split()
    day = DAYS.index(day)
    hour = int(hour)
    cost = int(cost)
    costs.append([day, hour, cost])

costs.insert(0, [0, 0, costs[-1][2]])

k = int(input())
result = 0
for i in range(k):
    day, hour, mbs = input().split()
    day = DAYS.index(day)
    hour = int(hour)
    mbs = int(mbs)
    for j in range(n + 1):
        if costs[j][0] > day:
            break
        if costs[j][0] == day and costs[j][1] > hour:
            break
    result += mbs * costs[j - 1][2]


print(result)



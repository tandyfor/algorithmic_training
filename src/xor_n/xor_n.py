n = int(input())

k = n % 4

match k:
    case 1:
        ans = 1
    case 2:
        ans = n + 1
    case 3:
        ans = 0;
    case _:
        ans = n

print(ans)
n = int(input())

tmp = 1
for number in range(1, n + 1):
    tmp ^= number
    print(f"{number:3} {tmp:3}", f"{tmp:#0{32}b}"[2:])
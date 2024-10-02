def fibonacci(n: int):
    temp = 0
    a = 0
    b = 1

    for _ in range(1, n):
        temp = a + b
        a = b
        b = temp

    return b

def main():
    n = int(input())
    result = 0
    for i in range(1, n):
        result += fibonacci(i)
    
    print(result)

if __name__ == "__main__":
    main()
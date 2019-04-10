def fib(n):
    if n==0:
        return 0
    else:
        a = [0 for _ in range(n+1)]
        a[0] = 0
        a[1] = 1
        for i in range(2, n+1):
            a[i] = a[i-1] + a[i-2]
        return a[n]

if __name__ == "__main__":
    print(fib(int(input())))
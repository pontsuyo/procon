# TLE
n, p = map(int, input().split())

if n==1:
    print(p)
else:
    out=1
    tm = int(pow(p, 1/n))
    for i in range(2,tm+1):
        while p%(i**n)==0:
            p = p//(i**n)
            out *= i
        if p < i**n:
            break
    print(out)
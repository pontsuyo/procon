n, d = map(int, input().split())
m = 2*d+1
if n%m>0:
    print(n//m+1)
else:
    print(n//m)
    
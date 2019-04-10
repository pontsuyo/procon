def gcd(a, b):
	while b:
		a, b = b, a % b
	return a

n,m = map(int, input().split())
s = input()
t = input()

gcd_ = gcd(n,m)
lcm = n*m//gcd_

a = lcm//n
b = lcm//m

flag=0
le = min(n,m)//(min(n,m)//gcd_)

for i in range(le):
    if s[i*b]!=t[i*a]:
        flag=1

if flag==1:
    print(-1)
else:
    print(lcm)
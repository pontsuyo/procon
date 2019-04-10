n = int(input())
a = list(map(int, input().split()))
# print(n,a)
s = [[] for _ in range(n)]

def Base_10_to_n(X, n):
    if (int(X/n)):
        return Base_10_to_n(int(X/n), n)+str(X%n)
    return str(X%n)

def Base_n_to_10(X,n):
    out = 0
    for i in range(1,len(str(X))+1):
        out += int(X[-i])*(n**(i-1))
    return out

cnt = 1
s[0] = [0] * a[0]

for i in range(n-1):
    if a[i]==a[i+1]:
        if str(s[i])
        cnt += 1
    
    elif a[i]>=a[i+1]:

    else:
        s[i+1] = s[i].append(0)
        pass
print(cnt)
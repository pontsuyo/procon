from collections import Counter

n= int(input())
a = list(map(int, input().split()))

def nibeki(x):
    cnt = 0
    while(x>1):
        x //=2
        cnt += 1
    return 2**(cnt+1)

cntSet = 0
c = Counter(a)
ks = list(c.keys())
ks.sort(reverse=True)

for k in ks:
    pair = nibeki(k)-k
    if k==pair:
        cntSet += c[k]//2

    elif c[k]>0 and c[pair]>0:
        COUNT = min(c[k], c[pair])
        c[k] -= COUNT
        c[pair] -= COUNT
        cntSet +=COUNT

print(cntSet)
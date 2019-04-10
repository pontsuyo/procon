from copy import copy

n,m = map(int, input().split())
a = [0]*m
b = [0]*m
for i in range(m):
    a[i], b[i] = map(int, input().split())

cnt = 0
atmp = copy(a)
btmp = copy(b)

while(1):
    cnt += 1
    
    if cnt==1:
        amax = max(atmp)
    else:
        btmp = copy(btmp2)
        atmp = copy(atmp2)
        amax = max(atmp2)
        
    lb = len(btmp)
    atmp2 = []
    btmp2 = []
    
    for i in range(lb):
        if(btmp[i]<=amax):
            atmp2.append(atmp[i])
            btmp2.append(btmp[i])
    
    if len(btmp2)==0 and len(atmp2)==0:
        break
    # print(atmp2, btmp2)

    cnt += 1
    
    atmp = copy(atmp2)
    btmp = copy(btmp2)
    bmin = min(btmp2)
        
    la = len(atmp)
    atmp2 = []
    btmp2 = []
    # print(atmp, btmp)
    for i in range(la):
        if(atmp[i]>=bmin):
            atmp2.append(atmp[i])
            btmp2.append(btmp[i])

    if len(btmp2)==0 and len(atmp2)==0:
        break
    # print(atmp2, btmp2)
print(cnt)
a,b,k = map(int, input().split())

while(k>0):
    tmp = a//2
    a = tmp
    b += tmp
    k -=1
    if k==0:
        break
    
    tmp = b//2
    b = tmp
    a += tmp
    k -=1
    if k==0:
        break
print(a,b)
n = int(input())
a = list(map(int, input().split()))

import numpy as np

def kai(n):
    c=1
    while(n>0):
        c *= n
        n -=1
    return c

def f(num):
    if  num==1:
        return [1]
    else:
        tmp = [kai(num)]*num
        for i in range(num-1):
            left = i+1
            right = num - left

            tmp = np.array(tmp)

            tmp += tl//L//kai(left) * f(left)
            tmp += tl//L//kai(right) * f(aList[i+1:L])





    L = len(aList)
    if L==1:
        return aList[0]
    else:
        tl = kai(L)
        tmp = tl*sum(aList)
        for i in range(L-1):
            left = i+1
            right = L-left
            tmp += tl//L//kai(left) * f(aList[0:i+1])
            tmp += tl//L//kai(right) * f(aList[i+1:L])
        return tmp%1000000007

# print(f(a)%1000000007)
print(f(a))
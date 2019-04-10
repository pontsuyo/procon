n = int(input())
t,a = map(int, input().split())
h = list(map(int, input().split()))

f = lambda x:t-x*0.006

tmp = list(map(f,h))

MIN = 500000000000000000000
idx = 0

for i in range(len(tmp)):
    if abs(tmp[i]-a)<MIN:
        # print(i, tmp[i])
        MIN = abs(tmp[i]-a)
        idx = i+1

print(idx)
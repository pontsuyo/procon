n,h,w = map(int, input().split())

cnt = 0
for i in range(n):
    a_, b_ = map(int, input().split())
    
    if a_ >=h and b_>=w:
        cnt += 1
print(cnt)
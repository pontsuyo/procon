n, k = map(int, input().split())
h = [int(input()) for _ in range(n)]

h.sort()

DEF_MIN = max(h)-min(h)

for i in range(n-k+1):
    tmp = h[i+k-1]-h[i]
    DEF_MIN = min(DEF_MIN, tmp)

print(DEF_MIN)
# ダメだった

n, W = map(int, input().split())

# print(n, W)

v = []
w = []
for i in range(n):
    vt, wt = map(int, input().split())
    v.append(vt)
    w.append(wt)

dpTable = [[0 for i in range(W+1)] for j in range(n)]

for w_ in range(W):
    if w_ < w[0]:
        dpTable[0][w_] = 0
    else:
        dpTable[0][w_] = v[0]

for i in range(1, n):
    for w_ in range(W+1):
        if w_ < w[i]:
            dpTable[i][w_] = dpTable[i-1][w_]
        else:
            dpTable[i][w_] = max(dpTable[i-1][w_-w[i]] + v[i], dpTable[i-1][w_])

print(max(dpTable[-1]))
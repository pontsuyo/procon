n, m = map(int, input().split())

pa = [{} for _ in range(n+m-1)]
pb = [{} for _ in range(n+m-1)]

for i in range(n):
    tmp = list(map(int, input().split()))
    for j in range(m):

        if tmp[j] in pa[i+j]:
            pa[i+j][tmp[j]] += 1
        else:
            pa[i+j][tmp[j]] = 1

            
for i in range(n):
    tmp = list(map(int, input().split()))
    for j in range(m):
        if tmp[j] in pb[i+j]:
            pb[i+j][tmp[j]] += 1
        else:
            pb[i+j][tmp[j]] = 1
if pa==pb:
    print("YES")
else:
    print("NO")
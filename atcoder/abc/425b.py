from collections import Counter

n = int(input())
a = list(map(int, input().split()))

cnt = Counter(a)
for k in cnt:
    if k != -1 and cnt[k] > 1:
        print("No")
        exit()


print("Yes")
rem = list(set(range(1, n+1)) - set(cnt.keys()))
idx = 0
ans = []
for i, ai in enumerate(a):
    if ai != -1:
        ans.append(ai)
        continue

    ans.append(rem[idx])
    idx += 1

print(*ans)

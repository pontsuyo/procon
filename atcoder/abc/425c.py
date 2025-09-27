n, q = map(int, input().split())
a = list(map(int, input().split()))

offset = 0

sums = [0] * (n * 2 + 1)
for i in range(n*2 + 1):
    if i == 0:
        continue
    else:
        sums[i] = sums[i-1] + a[(i-1)%n]



for _ in range(q):
    query = list(map(int, input().split()))
    if query[0] == 1:
        c = query[1]
        offset += c
        offset %= n

    # query[0] == 2
    else:
        l = query[1] + offset -1
        r = query[2] + offset -1

        print(sums[r+1] - sums[l])

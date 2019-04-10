n = int(input())
s = input()

MAX = 0
for i in range(n-1):
    x = s[:i+1]
    y = s[i+1:]
    tmp = len(set(list(x)).intersection(set(list(y))))
    MAX = max(tmp, MAX)

print(MAX)
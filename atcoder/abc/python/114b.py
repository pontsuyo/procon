s = input()
n = len(s)

MIN = 999
for i in range(n-2):
    MIN = min(MIN, abs(753-int(s[i:i+3])))

print(MIN)
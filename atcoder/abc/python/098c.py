n = int(input())
s = input()

num = [0 for _ in range(n)]

num[0] = s[1:].count("E")
for i in range(1,n):
    num[i] = num[i-1] + int(s[i-1]=="W") - int(s[i]=="E")

print(min(num))
s = input()
s = list(s)

n = len(s)
m = 0
cnt=0

for i in range(n):
    if s[i]=="W":
        m+=i
        cnt +=1

SUM = cnt*(cnt-1)//2
print(m-SUM)
n = int(input())

li = [(i,i*(i+1)) for i in range(2,317)]

m=0
for ll in li:
    if n==ll[1]:
        m = ll[0]
        break

if m!=0:
    print("Yes")
    print(n)
    print(str(m) + " " + " ".join(map(str, range(1,m+1))))
    for i in range(1, m+1):
        if i==0:
            tmn = [1] + list(range(m+1, 2*m))

        else:
            tmn = list(map(lambda x:x+1, tmo))[:i]
            tmn.append(tmn[-1]+m-i)
        # print(tmn)

        if i==0:
            pass
        else:
            tmn += list(range(tmo[-1]+1, tmo[-1]+m-i))
        # print(tmn)
        print(str(m) + " " + " ".join(map(str, tmn)))
        tmo = tmn

else:
    print("No")

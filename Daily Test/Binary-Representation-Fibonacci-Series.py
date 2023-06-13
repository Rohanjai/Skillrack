n=int(input())
l=[0,1]
for i in range(2,n):
    l.append(l[i-1]+l[i-2])
l=list(map(bin,l))
for i in l:
    print(i[2:],end=' ')

s=list(input().strip())
l1=[]
l2=[]
for i in set(s):
    if s.count(i)%2==0:
        l2.append(i)
    else:
        l1.append(i)
l1.sort()
l2.sort(reverse=True)
print(*l1,*l2,sep="")
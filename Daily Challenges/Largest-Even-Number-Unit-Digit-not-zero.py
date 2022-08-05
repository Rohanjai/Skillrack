n1,n2=map(int,input().split())
l1=[int(i) for i in str(n1)]
l2=[int(j) for j in str(n2)]
l=l1+l2
l.sort(reverse=True)
temp=0
for i in range(len(l)-1,-1,-1):
    if l[i]%2==0 and l[i]!=0:
        temp=l[i]
        l.remove(l[i])
        l.append(temp)
        break
res=""
for i in l:
    res+=str(i)
res=int(res)
if res%2==0 and res%10!=0:
    print(res)
else:
    print("-1")
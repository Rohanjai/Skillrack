n=input().strip()
l=[]
for i in n:
    l.append(int(i))
flag=False
for i,val in enumerate(l):
    if i==0:
        if l[i+1]%2==0:
            flag=True
            print(val,end="")
    elif i==len(l)-1:
        if l[i-1]%2==0:
            flag=True
            print(val,end="")
    else:
        if l[i-1]%2==0 and l[i+1]%2==0:
            flag=True
            print(val,end="")
if not flag:
    print(-1)
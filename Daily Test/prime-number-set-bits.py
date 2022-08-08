m,n=map(int,input().split())
printed=False
for i in range(m,n+1):
    x=bin(i)[2:]
    x=str(x)
    countof1=x.count('1')
    countof1=int(countof1)
    if countof1<=1:
        continue
    else:
        for j in range(2,countof1):
            if(countof1%j==0):
                f=False
                break
        else:
            print(i,end=" ")
            printed=True
if not printed:
    print("-1")
m,n=map(int,input().split())
if n==0:
    print("Invalid")
    exit(0)
else:
    l1=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    ans=[]
    flag=0
    for i in l1:
        if i in l2 and not in ans:
            ans.append(i)
            flag=1
    if not flag:
        print("Invalid")
        exit(0)
    else:
        print(*ans)
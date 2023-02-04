#Your code below
l1=input().strip().split(" ")
l2=input().strip().split(" ")
n=min(len(l1),len(l2))
for i in range(n):
    if len(l1[i])>=len(l2[i]):
        print(l1[i],end=" ")
    else:
        print(l2[i],end=" ")
if len(l1)>n:
    print(*l1[n:])
elif len(l2)>n:
    print(*l2[n:])
    
n=int(input())
l=[list(map(str,input().split())) for _ in range(n)]
rown=0;unctr=0;maxctr=0;a=1
for i in l:
    unctr=0
    unctr=len(set(i))
    if unctr>=maxctr:
        maxctr=unctr
        rown=a
    a+=1
print(rown)
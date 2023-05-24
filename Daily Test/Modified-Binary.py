n=list(bin(int(input()))[2:])
n=list(map(int,n))
cnt=1
for i in range(len(n)):
    if n[i]==1:
        n[i]=cnt
        cnt+=1
cnt=1
for i in range(len(n)-1,-1,-1):
    if n[i]==0:
        n[i]=cnt
        cnt+=1
print(*n,sep="")
    

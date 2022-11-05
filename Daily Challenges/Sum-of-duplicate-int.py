n=int(input())
l=list(map(str,input().split()))
ans=0
if len(set(l))==len(l):
    print(-1)
    exit()
for i in set(l):
    if l.count(i)>1:
        ans+=int(i)
print(ans)
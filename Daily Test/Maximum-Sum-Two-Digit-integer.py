l=list(input().strip())
l.sort()
l.reverse()
half= len(l)//2
ans=[0]*half
for i in range(half):
    ans[i] = int(l[i])*10
for i in range(half):
    ans[i]+=int(l[half+i])
print(sum(ans))
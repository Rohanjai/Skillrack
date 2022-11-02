n=int(input())
l=list(map(int,input().split()))
odd=[];even=[]
for i in l:
    if (i//10%10)%2!=0:
        odd.append(i)
    else:
        even.append(i)
if len(odd)>len(even):
    print(*odd)
elif len(even)>len(odd):
    print(*even)
else:
    print("-1")
l=["zero","one","two","three","four","five","six","seven","eight","nine"]
n=int(input())
ans=[]
while n>0:
    t=n%10
    ans.append(l[t])
    n//=10
ans.reverse()
print(*ans)
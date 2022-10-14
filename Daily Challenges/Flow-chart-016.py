m,n=map(int,input().split())
while m!=n:
    if m<n:
        print(m,end="")
        m+=1 
    else:
        print(n,end="")
        n+=1 
print(m)
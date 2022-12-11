n=int(input())
l=list(map(str,input().split()))
x=input().strip()
for i in l:
    if i not in x:
        print("NO")
        exit()
print("YES")
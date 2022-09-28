s=input().strip().split()
s=s[::-1]
for i,c in enumerate(s):
    if i%2!=0:
        print(c[::-1],end=" ")
    else:
        print(c,end=" ")
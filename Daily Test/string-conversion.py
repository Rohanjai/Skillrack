s1,s2=input().split()
l=[]
for i in s1:
    if i.toupper() not in s2:
        l.append(i)
for i in l:
    if i.islower():
        print("NO")
        exit()
print("YES")
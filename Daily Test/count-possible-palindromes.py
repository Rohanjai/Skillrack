s=input().strip().split(" ")
ctr=0
for i in range(len(s)):
    for j in range(len(s)):
        if i==j:
            continue
        t=s[i]+s[j]
        if t==t[::-1]:
            ctr+=1
print(ctr)
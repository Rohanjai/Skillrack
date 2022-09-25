s1=input().strip().split(" ")
s2=input().strip().split(" ")
ctr=0
for i in set(s2):
    if s1.count(i)>=1:
        ctr+=1
print(ctr)
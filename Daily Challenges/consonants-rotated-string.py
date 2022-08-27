from collections import deque as d 
s,n=map(str,input().split())
n=int(n)*-1
l=list(s)
cons=[]
vowels="aeiouAEIOU"
for i in l:
    if i not in vowels:
        cons.append(i)
cons=d(cons)
cons.rotate(n)
cons=list(cons)
ctr=0
for i in l:
    if i not in vowels:
        print(cons[ctr],end="")
        ctr+=1
    else:
        print(i,end="")
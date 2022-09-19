from itertools import permutations as p
n=list(input())
l=n[len(n)-3:]
for i in p(l):
    a=''.join(i)
    a=int(a)
    if a%8==0:
        print("Yes")
        exit()
print("No")
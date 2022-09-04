r,c=map(int,input().split())
l=[list(map(str,input().split())) for i in range(r)]
zero=[]
ctr=1
for i in l:
    zero.append([i.count('0'),ctr])
    ctr+=1
for i in sorted(zero):
    print(i[1],end=" ")
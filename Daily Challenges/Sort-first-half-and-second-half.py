n=int(input())
l=list(map(int,input().split()))
if n%2==0:
    l1=l[:len(l)//2]
    l2=l[len(l)//2:]
    l1.sort()
    l2.sort(reverse=True)
    print(*l1,*l2)
else:
    l1=l[:(len(l)//2)+1]
    l2=l[(len(l)//2)+1:]
    l1.sort()
    l2.sort(reverse=True)
    print(*l1,*l2)
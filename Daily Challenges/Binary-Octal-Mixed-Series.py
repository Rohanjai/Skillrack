x,n=map(int,input().split())
for i in range(n):
    if i%2==0:
        print(bin(x)[2:],end=' ')
    else:
        print(oct(x)[2:],end=' ')
    x+=1

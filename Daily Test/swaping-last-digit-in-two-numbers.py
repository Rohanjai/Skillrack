x,y=list(map(str,input().strip().split()))
x=list(x)
y=list(y)
x[-1],y[-1]=y[-1],x[-1]
print(''.join(x),''.join(y))
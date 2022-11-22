m,n=map(str,input().split())
m=set(m)
n=set(n)
s1,s2=0,0
for i in m:
    s1+=int(i)
for i in n:
    s2+=int(i)
print("YES" if s1==s2 else "NO")
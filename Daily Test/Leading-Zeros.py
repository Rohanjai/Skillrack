n=int(input())
x=bin(n)[2:][::-1]
ctr=0
for i in range(len(x)):
    if x[i]=='0':
        ctr+=1
    else:
        break
print(ctr)
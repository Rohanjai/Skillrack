n=int(input())
n=bin(n)[2:]
ctr=0
for i in range(len(n)):
    for j in range(i):
        print('*',end="")
    print(n[i:],end="")
    print()
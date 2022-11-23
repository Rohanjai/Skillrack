n=input().strip()
for i in n:
    if int(i)==0:
        continue
    for j in range(int(i)):
        print(i,end="")
    print()
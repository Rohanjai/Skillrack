l=input().strip().split(" ")
for i in l:
    if i.islower() or i.isupper():
        print(i.swapcase(),end=" ")
    else:
        print(i,end=" ")
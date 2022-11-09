l=input().strip().split(" ")
for i in l:
    if len(i)==1:
        print(i.upper(),end=" ")
        continue
    print(i[0].upper(),i[1:len(i)-1],i[len(i)-1].upper(),sep="",end=" ")
s=input().strip().split(" ")
minl =999999
for i in s:
    if len(i)<=minl:
        minl=len(i)
for i in s:
    if len(i)==minl:
        print(i)
        exit()
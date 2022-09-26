s=input().strip().split(" ")
l=[]
for i in range(26):
    l.append("")
for i in s:
    l[ord(i[0].lower())-ord('a')]+=i 
for i in l:
    if i!="":
        print(i)
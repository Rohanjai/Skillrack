S1=input().strip()
S2=input().strip()
for ch in S1:
    if ch in "aeiouAIEOU" and ch in S2:
        print(ch,end="")
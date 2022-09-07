s=input().strip()
vowel="aeiouAEIOU"
for i in range(len(s)):
    if s[i] in vowel and (i+1)%2!=0:
        print(s[i].swapcase(),end="")
    else:
        print(s[i],end=" ")

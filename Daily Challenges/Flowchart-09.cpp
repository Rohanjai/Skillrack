#include <bits/stdc++.h>
 
using namespace std;
int isVowel(char ch){
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return 1;
    }
    else {
        return 0;
    }
}
char stringReplace(char ch){
    if(isVowel(ch)){
        return ch;
    }
    else if(ch=='z'){
        return 'b';
    }
    else{
        ch++;
        if(isVowel(ch)){
            ch++;
            return ch;
        }
        else{
            return ch;
        }
    }
}
int main(int argc, char** argv)
{
    char s[101];
    cin>>s;
    int i=0,len=strlen(s);
    while(i<len){
        s[i]=stringReplace(s[i]);
        cout<<s[i];
        i++;
    }


}
#include <bits/stdc++.h> 
using namespace std;
int isVowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return 1;
    }
    return 0;
}
int main(int argc, char** argv)
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(isVowel(s[i])){
            if(s[i]=='z'){
                s[i]='b';
            }
            else{
                s[i]=s[i]+1;
            }
        }
        else{
            if(s[i]>='a' && s[i]<='e'){
                s[i]='e';
            }
            else if(s[i]>='e' && s[i]<='i'){
                s[i]='i';
            }
            else if(s[i]>='i' && s[i]<='o'){
                s[i]='o';
            }
            else if(s[i]>='o' && s[i]<='u'){
                s[i]='u';
            }
            else if(s[i]>'u'){
                s[i]='a';
            }
        }
        cout<<s[i];
    }

}
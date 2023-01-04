#include <bits/stdc++.h>
 
using namespace std;
bool isVowel(char ch){
    ch=tolower(ch);
    return(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u');
}
int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int c1,c2;
    for(int i=0;i<s.length();i++){
        if(!isVowel(s[i])){
            c1=i;
            break;
        }
    }
    for(int i=s.length()-1;i>=0;i--){
        if(isVowel(s[i])){
            c2=i;
            break;
        }
    }
    swap(s[c1],s[c2]);
    cout<<s;

}
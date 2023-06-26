#include <bits/stdc++.h>
 
using namespace std;
bool isVowel(char ch){
    ch=tolower(ch);
    return (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u');
}
void change(string &s,char &ch){
    int ind=0;
    for(int i=0;i<s.size();i++){
        if(isVowel(s[i])){
            for(int j=ind;j<i;j++){
                if(s[j]==ch){
                    s[j]=s[i];
                }
            }
            ind=i;
        }
    }
}
int main(int argc, char** argv)
{
    string s;
    char ch;
    cin>>s>>ch;
    change(s,ch);
    cout<<s;


}

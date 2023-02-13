#include <bits/stdc++.h>
 
using namespace std;
bool isVowel(char ch){
    ch=tolower(ch);
    return (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u');
}
int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int i;
    for(i=s.size()-1;i>=0;i--){
        if(isVowel(s[i])){
           break; 
        }
    }
    reverse(s.begin(),s.begin()+i);
    cout<<s;


}
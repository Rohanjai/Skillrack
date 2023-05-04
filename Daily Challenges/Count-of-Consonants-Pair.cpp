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
    int cnt=0;
    for(int i=0;i<s.size()-1;i++){
        if(!isVowel(s[i]) and !isVowel(s[i+1])){
            cnt++;
        }
    }
    cout<<cnt;

}

#include <bits/stdc++.h>
 
using namespace std;
bool isVowel(char &ch){
    ch=tolower(ch);
    return (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u');
}
bool isPresent(string s,map<char,int> &mp){
    for(char &c:s){
        if(isVowel(c) and mp.find(c)!=mp.end()){
            mp[c]++;
        }
    }
    for(auto i:mp){
        if(i.second==0){
            return false;
        }
    }
    return true;
}
int main(int argc, char** argv)
{
    string s;
    cin>>s;
    map<char,int> mp{{'a',0},{'e',0},{'i',0},{'o',0},{'u',0}};
    if(isPresent(s,mp)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }


}
#include <bits/stdc++.h>
 
using namespace std;
bool isVowel(char ch){
    ch=tolower(ch);
    return (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u');
}
pair<int,int> countVC(string &s){
    int cnt=0;
    for(char &c:s){
        if(isVowel(c)){
            cnt++;
        }
    }
    return {cnt,s.size()-cnt};
}
int main(int argc, char** argv)
{
    string s;
    cin>>s;
    pair<int,int> ctr = countVC(s);
    if(ctr.first==ctr.second){
        cout<<s;
    }
    else if(ctr.first>ctr.second){
        for(char &c:s){
            if(isVowel(c)){
                cout<<c;
            }
        }
    }
    else{
        for(char &c:s){
            if(!isVowel(c)){
                cout<<c;
            }
        }
    }
    


}
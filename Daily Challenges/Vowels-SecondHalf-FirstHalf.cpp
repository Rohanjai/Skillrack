#include <bits/stdc++.h>
 
using namespace std;
vector<char> vowels;
bool isVowel(char ch){
    ch=tolower(ch);
    return (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u');
}
void make(string s){
    for(char &c:s){
        if(isVowel(c)){
            vowels.push_back(c);
        }
    }
}
int main(int argc, char** argv)
{
    string s;
    cin>>s;
    make(s.substr(s.size()/2,s.size()));
    make(s.substr(0,s.size()/2));
    if(vowels.size()==0){
        cout<<"-1";
        return 0;
    }
    for(char c:vowels){
        cout<<c;
    }

}

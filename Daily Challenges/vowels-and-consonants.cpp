#include <bits/stdc++.h> 
using namespace std;
int isvowel(char ch){
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return 1;
    }
    return 0;
}
int main(int argc, char** argv)
{
    vector<char> s1,s2;
    string s;
    cin>>s;
    for(char a:s){
        if(isvowel(a)){
            s2.push_back(a);
        }
        else{
            s1.push_back(a);
        }
    }
    for(char a:s2){
        cout<<a;
    }
    for(char b:s1){
        cout<<b;
    }
}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    bool f=false;
    char ch=s[s.size()-1];
    string ans="";
    for(char &c:s){
        if(c!=ch){
            f=true;
            ans+=c;
        }
    }
    if(!f){
        cout<<"-1";
    }
    else{
        long x = stol(ans);
        cout<<x;
    }

}
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    string s;
    cin>>s;
    bool sw = false;
    for(int i=0;i<s.size();i++){
        if(!isalnum(s[i]) and !isspace(s[i])){
            if(!sw){
                s[i]='.';
            }
            else{
                s[i]=',';
            }
            sw=!sw;
        }
    }
    cout<<s;
}
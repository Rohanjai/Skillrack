#include <bits/stdc++.h>
 
using namespace std;
bool check(char s){
    
    return (s=='b' or s=='a' or s=='A' or s=='B');
}
int main(int argc, char** argv)
{
    string s;
    int cnt=0;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])){
            continue;
        }
        else if(isalpha(s[i-1]) and !isalpha(s[i])){
            if(check(s[i-1])){
                cnt++;
            }
        }
    }
    if(check(s[s.size()-1])) cnt++;
    cout<<cnt;
}

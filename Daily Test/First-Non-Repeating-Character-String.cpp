#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    map<char,int> mp;
    for(char &c:s){
        mp[c]++;
    }
    for(int i=0;i<s.size();i++){
        if(mp[s[i]]==1){
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";

}
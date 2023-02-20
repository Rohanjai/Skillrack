#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(char &c : s){
        mp[c]++;
    }
    for(auto i : mp){
        if(i.second&1){
            cout<<i.first;
        }
    }


}
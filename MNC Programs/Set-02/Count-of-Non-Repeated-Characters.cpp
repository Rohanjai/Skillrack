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
    int ctr=0;
    for(char &c:s){
        if(mp[c]==1){
            ctr++;
        }
    }
    cout<<ctr;


}
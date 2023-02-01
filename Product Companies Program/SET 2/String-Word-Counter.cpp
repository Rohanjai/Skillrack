#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    unordered_map<string,int> mp;
    string s,word;
    getline(cin,s);
    int n,ctr=0;
    cin>>n;
    stringstream ss(s);
    while(ss >> word){
        mp[word]++;
    }
    for(auto x:mp){
        if(x.second==n){
            ctr++;
        }
    }
    cout<<ctr;


}
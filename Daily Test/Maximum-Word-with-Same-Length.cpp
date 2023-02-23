#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s,t;
    getline(cin,s);
    stringstream ss(s);
    map<int,int> mp;
    while(ss >> t){
        mp[t.size()]++;
    }
    int x=0;
    for(auto i:mp){
        if(i.second>x){
            x=i.second;
        }
    }
    stringstream s2(s);
    while(s2 >> t){
        if(mp[t.size()]==x){
            cout<<t<<" ";
        }
    }
    


}
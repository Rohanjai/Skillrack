#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int n;
    cin>>s>>n;
    unordered_map<char,int> mp;
    for(char &c:s){
        mp[c]++;
    }
    reverse(s.begin(),s.end());
    for(char &c:s){
        if(mp[c]==n){
            cout<<c;
            return 0;
        }
    }
    cout<<-1;
    


}
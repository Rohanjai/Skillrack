#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,k;
    vector<string> arr;
    cin>>n>>k;
    string s;
    int ctr=0;
    for(int i=0;i<n;i++){
        cin>>s;
        unordered_map<char,int> mp;
        for(char &c:s){
            mp[c]++;
        }
        int cnt=0;
        for(char c: s){
            if(mp[c]==1){
                cnt++;
            }
        }
        if(cnt<=k){
            ctr++;
        }
    }
    cout<<ctr;

}
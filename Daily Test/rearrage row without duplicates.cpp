#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r,c;
    cin>>r>>c;
    map<int,int> mp;
    for(int i = 0 ;i<r;i++){
        for(int j = 0 ;j<c;j++){
            int val;
            cin>>val;
            mp[val]++;
        }
    }
    for(auto &i: mp){
        if(i.second>c){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<string> arr;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        arr.push_back(s);
    }
    unordered_map<int,string> mp;
    for(auto i:arr){
        auto it = mp.find(i.size());
        if(it==mp.end()){
            mp[i.size()]=i;
        }
        else{
            mp[i.size()]=max(mp[i.size()],i);
        }
    }
    vector<pair<int,string>> ans;
    for(auto i:mp){
        ans.push_back({i.first,i.second});
        //cout<<i.first<<" "<<i.second<<endl;
    }
    sort(ans.begin(),ans.end());
    for(auto i:ans){
        cout<<i.second<<" ";
    }
}
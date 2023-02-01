#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<pair<char,int>>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr.begin(),arr.end());
    pair<char,int> maxi=arr[0];
    for(auto i:arr){
        if(i.first==maxi.first){
            maxi.second=max(i.second,maxi.second);
        }
        
    }
    cout<<maxi.first<<maxi.second;

}
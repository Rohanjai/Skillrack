#include <bits/stdc++.h>
 
using namespace std;
int digit(int n){
    int ctr=0;
    while(n>0){
        ctr+=(n%10);
        n/=10;
    }
    return ctr;
}
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    long long int arr[n];
    vector<pair<long long,int>> ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans.push_back({arr[i],digit(arr[i])});
    }
    sort(ans.begin(),ans.end(),[](auto &left,auto &right){
        return left.second>right.second;
    });
    pair<long long int,int> x(ans[0].first,ans[0].second);
    for(auto i : ans){
        if(x.second==i.second){
            x.first=max(i.first,x.first);
        }
        else{
            break;
        }
        //cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<x.first;
    


}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    stable_sort(arr.begin(),arr.end());
    vector<int> discount;
    for(auto i:arr){
        discount.push_back(i.first-i.second);
    }
    auto x = *max_element(discount.begin(),discount.end());
    auto it = find(discount.begin(),discount.end(),x);
    cout<<arr[it-discount.begin()].second;
    

}
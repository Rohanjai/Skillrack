#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }
    int k;
    cin>>k;
    sort(arr.begin(),arr.begin()+k);
    sort(arr.begin()+k,arr.end(),greater<int>());
    for(auto i:arr){
        cout<<i<<" ";
    }


}
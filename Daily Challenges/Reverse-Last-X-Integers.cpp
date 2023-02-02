#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr.begin(),arr.end());
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }


}
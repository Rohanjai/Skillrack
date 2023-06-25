#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int s = accumulate(arr.begin(),arr.begin()+k,0);
    for(int i=n-k;i<n;i++){
        cout<<s-arr[i]<<" ";
    }


}

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) 
    cin>>arr[i];
    sort(arr.begin(),arr.end());
    cout<<arr[0]<<" "<<arr[n-1];
    


}

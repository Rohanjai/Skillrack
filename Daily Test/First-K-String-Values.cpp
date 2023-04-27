#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,k;
    cin>>n>>k;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),greater<string>());
    for(int i=0;i<k;i++){
        cout<<arr[i]<<endl;
    }


}

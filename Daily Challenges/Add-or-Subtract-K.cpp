#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%10==k%10){
            arr[i]+=k;
        }
        else{
            arr[i]-=k;
        }
        cout<<arr[i]<<" ";
    }


}

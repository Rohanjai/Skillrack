#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x,y;
    cin>>n>>x>>y;
    int arr[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>=x and arr[i]<=y){
            sum+=arr[i];
        }
    }
    cout<<sum;


}
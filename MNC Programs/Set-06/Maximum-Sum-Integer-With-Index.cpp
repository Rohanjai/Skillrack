#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i]*i;
    }
    cout<<s;


}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<arr[n-2]*arr[n-1];


}
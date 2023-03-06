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
    cout<<arr[1]-arr[0]<<" ";
    for(int i=1;i<n-1;i++){
        cout<<min(arr[i-1],arr[i+1])-arr[i]<<" ";
    }
    cout<<arr[n-2]-arr[n-1];


}
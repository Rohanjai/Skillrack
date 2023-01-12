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
    for(int j=n-1;j>=0;j--){
        if(arr[j]<0){
            cout<<arr[j]<<" ";
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==0){
            cout<<arr[i]<<" ";
        }
    }
    for(int j=n-1;j>=0;j--){
        if(arr[j]>0){
            cout<<arr[j]<<" ";
        }
    }


}
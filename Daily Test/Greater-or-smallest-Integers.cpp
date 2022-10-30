#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x;
    cin>>n>>x;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=x){
            c1++;
        }
        else{
            c2++;
        }
    }
    if(c1>=c2){
        for(int i=0;i<n;i++){
            if(arr[i]>=x){
                cout<<arr[i]<<" ";
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]<x){
                cout<<arr[i]<<" ";
            }
        }
    }


}
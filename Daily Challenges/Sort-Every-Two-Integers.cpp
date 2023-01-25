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
    for(int i=0;i<n;i+=2){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
        cout<<arr[i]<<" "<<arr[i+1]<<" ";
    }


}
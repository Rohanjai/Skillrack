#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; 
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n-2;i++){
        if(arr[i-1]&1 and arr[i+1]&1){
            cout<<arr[i]<<" ";
        }
        else if(arr[i-1]%2==0 && arr[i+1]%2==0){
            cout<<arr[i]<<" ";
        }
    }
}
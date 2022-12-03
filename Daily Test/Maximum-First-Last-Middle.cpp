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
    int max=-99999999;
    if(arr[0]<arr[n-1]){
        max=arr[n-1];
    }
    else{
        max=arr[0];
    }
    
    cout<<(max < arr[n/2]? arr[n/2] : max);

}
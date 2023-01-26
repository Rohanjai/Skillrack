#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(arr[i-1]!=arr[i]){
            cout<<arr[i]<<" ";
            break;
        }
    }


}
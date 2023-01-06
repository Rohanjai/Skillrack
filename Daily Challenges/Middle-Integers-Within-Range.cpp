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
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[0] and arr[i]<arr[n-1]){
            continue;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";


}
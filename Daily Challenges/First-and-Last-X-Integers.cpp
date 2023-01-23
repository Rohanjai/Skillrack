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
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        if(arr[i]!=arr[n-x+i]){
            cout<<"no ";
            return 0;
        }
    }
    cout<<"yes";


}
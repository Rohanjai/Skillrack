#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[n],mat[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>mat[i];
    }
    for(int i=0;i<n;i++){
        cout<<(arr[i]<mat[i] ? arr[i] : mat[i])<<" ";
    }


}
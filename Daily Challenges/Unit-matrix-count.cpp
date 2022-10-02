#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int ctr=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[i][j]==1 and arr[i][j+1]==1 and arr[i+1][j]==1 and arr[i+1][j+1]==1){
                ctr++;
            }
        }
    }
    cout<<ctr;


}
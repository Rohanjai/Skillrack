#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i = 0 ;i<n;i++){
        for(int j = 0 ;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ;i<n;i++){
        for(int j = 0 ;j<n;j++){
            if(j<=i){
                cout<<arr[n-j-1][n-i-1]<<' ';
            }
            else
                cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
}
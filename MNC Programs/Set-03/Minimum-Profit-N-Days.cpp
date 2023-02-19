#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int x = arr[0][i];
        for(int j=0;j<m;j++){
            
            x = min(x,arr[j][i]);
        }
        cout<<x<<" ";
    }


}
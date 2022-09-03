#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i = 0,val=1,c=n ;i<n;i++){
        if(i&1){
            for(int j = c-1;j>=i;j--)arr[i][j] = val++;
        }
        else{
            for(int j = i;j<c;j++)arr[i][j] = val++;
        }
        for(int j = 0 ;j<c;j++){
            if(i>j)cout<<arr[j][i]<<" ";
            else cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
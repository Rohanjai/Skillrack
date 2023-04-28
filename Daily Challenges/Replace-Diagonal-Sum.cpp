#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,sum=0;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(i==j or i==n-j-1){
                sum+=arr[i][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<((i==j or i==n-j-1)? sum:arr[i][j])<<" ";
        }
        cout<<endl;
    }


}

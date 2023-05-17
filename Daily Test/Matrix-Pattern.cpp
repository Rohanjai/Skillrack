#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>>mat;
    for(int a=0;a<n;a++){
        int f=arr[0][a]-1;
        vector<int>t;
        for(int i=0;i<n;i++){
            t.push_back(arr[f][i]);
           
        }
        mat.push_back(t);
        
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }

}

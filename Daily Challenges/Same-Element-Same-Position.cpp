#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> arr(r,vector<int>(c));
    vector<vector<int>> mat(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==mat[i][j]){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }


}

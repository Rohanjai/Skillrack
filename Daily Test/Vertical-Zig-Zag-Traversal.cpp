#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> arr(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
       
    }
    for(int i=0;i<c;i++){
        if(i&1){
            for(int j=r-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
        else
        for(int j=0;j<r;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }


}

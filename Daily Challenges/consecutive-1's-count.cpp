#include <bits/stdc++.h>
 
using namespace std;
int main(int argc, char** argv)
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int mat[c][r];
    int mainctr=0,ctr=0;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            mat[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<c;i++){
        ctr=0;
        for(int j=0;j<r;j++){
            if(mat[i][j]==0){
                if(ctr>1){
                    mainctr++;
                }
                ctr=0;
            }
            else{
                ctr++;
            }
            //cout<<mat[i][j]<<"-"<<ctr<<"-"<<mainctr<<endl;
        }
        if(ctr>1){
            mainctr++;
        }
    }
    cout<<mainctr;

}
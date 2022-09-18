#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r,c;
    cin>>r>>c;
    int arr[r][c],sum=0;
    for(int i=0;i<=r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    if(r%2==0){
        if(c%2==0){
            for(int i=0;i<r/2;i++){
                for(int j=0;j<c/2;j++){
                    sum+=arr[i][j];
                }
            }
        }
        else{
            for(int i=0;i<r/2;i++){
                for(int j=0;j<=c/2;j++){
                    sum+=arr[i][j];
                }
            }
        }
    }
    else{
        if(c&1){
            for(int i=0;i<=r/2;i++){
                for(int j=0;j<=c/2;j++){
                    sum+=arr[i][j];
                }
            }
        }
        else{
            for(int i=0;i<=r/2;i++){
                for(int j=0;j<c/2;j++){
                    sum+=arr[i][j];
                }
            }
        }
    }
    cout<<sum;

}
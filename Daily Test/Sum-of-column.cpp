#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r,c,sum=0;
    bool print=true;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            if(arr[0][i]&1){
                sum+=arr[j][i];
                print=false;
                continue;
            }
            if(!print){
                sum+=arr[j][i];
            }
        }
        print=true;
    }
    if(sum==0){
        cout<<-1;
    }
    else{
        cout<<sum;
    }


}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r,c,sum=0;
    bool print=false;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<c;i++){
        if(arr[0][i]&1){
            for(int j=0;j<r;j++){
                sum+=arr[j][i];
            }
            print=true;
        }  
    }
    if(!print){
        cout<<-1;
    }
    else{
        cout<<sum;
    }


}
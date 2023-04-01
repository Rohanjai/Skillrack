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
    for(int i=0;i<r;i++){
        
        for(int j=0;j<c;j++){
            int sum=0;
            if(j+1>=0 and j+1<c){
                sum+=arr[i][j+1];
            }
            if(i+1>=0 and i+1<r){
                sum+=arr[i+1][j];
            }
            cout<<(sum==0? arr[i][j] : sum)<<" ";
            
        }
        cout<<endl;
    }


}
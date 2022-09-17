#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r,c;
    cin>>r>>c;
    int arr[r][c],max=0,sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r-1;i++){
        for(int j=0;j<c-1;j++){
            sum=arr[i][j]+arr[i+1][j]+arr[i+1][j+1];
            if(sum>max){
                max=sum;
            }
            sum=0;
        }
    }
    cout<<max;


}
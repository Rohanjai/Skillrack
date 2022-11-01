#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,s1=0,s2=0;
    cin>>n;
    int arr[n][n],mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(j<=i){
                s1+=arr[i][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
            if(j<=i){
                s2+=mat[i][j];
            }
        }
    }
    if(s1>=s2){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i>=j){
                    cout<<arr[i][j]<<" ";
                }
            }
            cout<<endl;
        }
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i>=j){
                    cout<<mat[i][j]<<" ";
                }
            }
            cout<<endl;
        }
    }


}
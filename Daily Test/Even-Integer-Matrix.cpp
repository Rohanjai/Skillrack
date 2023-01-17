#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int ctr=0;
    vector<int> even;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]%2==0){
                ctr++;
                even.push_back(arr[i][j]);
            }
        }
    }
    if(ctr==0){
        cout<<"-1";
        return 0;
    }
    if(ctr==1){
        cout<<even[0];
        return 0;
    }
    int r=2,c=even.size();
    while(c%r !=0 and r<c){
        r+=1;
    }
    int cnt=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c/r;j++){
            cout<<even[cnt++]<<" ";
        }
        cout<<endl;
    }

}
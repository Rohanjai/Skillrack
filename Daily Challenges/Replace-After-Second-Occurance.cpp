#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    int k;
    cin>>n>>k;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j][i]==k and cnt<2){
                cnt++;
            }
            else if(cnt==2){
                arr[j][i]=-1;
            }
        }
    }
    for(auto &i:arr){
        for(auto &j:i){
            if(j==-1){
                cout<<"*";
            }
            else{
                cout<<j;
            }
            cout<<" ";
        }
        cout<<endl;
    }
}

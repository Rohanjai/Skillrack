#include <bits/stdc++.h>
 
using namespace std;
int countdigi(vector<vector<int>> &arr,int &n,int x){
    int cnt=0;
    int y = (x==1 ? 0 : 1);
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            if(arr[i][j]==x and arr[i+1][j]==y and arr[i-1][j]==y and arr[i][j+1]==y and arr[i][j-1]==y){
                cnt++;
            }
        }
    }
    return cnt;
}
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cin>>arr[i][j];
        }
    }
    cout<<countdigi(arr,n,0)<<" "<<countdigi(arr,n,1);


}

#include <bits/stdc++.h>
 
using namespace std;
int countne(vector<vector<int>> &arr,int &r,int &c){
    pair<int,int> ans = {-1,-1};
    bool f=false;
    for(int i=0;i<c;i++){
        int cnt=0;
        for(int j=0;j<r;j++){
            if(arr[j][i]<0){
                cnt++;
                f=true;
            }
        }
        if(ans.first<cnt){
            ans.first=cnt;
            ans.second = i+1;
        }
    }
    return f ? ans.second : -1;
}
int main(int argc, char** argv)
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> arr(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<countne(arr,r,c);


}

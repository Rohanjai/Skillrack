#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> arr;
    for(int i=0;i<r;i++){
        vector<int> temp;
        for(int j=0;j<c;j++){
            int t;
            cin>>t;
            temp.push_back(t);
        }
        arr.push_back(temp);
    }
    vector<pair<int,int>> maxcol;
    for(int i=0;i<c;i++){
        int mx=0,ind=0;
        for(int j=0;j<r;j++){
            if(mx<arr[j][i]){
                mx=arr[j][i];
                ind=i;
            }
        }
        maxcol.push_back({mx,ind});
       
    }
    vector<vector<int>> ans;
    //reverse(maxcol.begin(),maxcol.end());
    stable_sort(maxcol.begin(),maxcol.end(),[](auto &i,auto &j){
        return i.first>j.first;
    });
    // for(auto i:maxcol){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    //reverse(maxcol.begin(),maxcol.end());
    for(int i=maxcol.size()-1;i>=0;i--){
        vector<int> temp;
        for(int j=0;j<r;j++){
           // cout<<arr[j][maxcol[i].second]<<" ";
            temp.push_back(arr[j][maxcol[i].second]);
        }
        //cout<<endl;
        ans.push_back(temp);
    }
    vector<vector<int>> t;
    for(int i=r-1;i>=0;i--){
        vector<int> temp;
        for(int j=0;j<c;j++){
            //cout<<ans[j][i]<<" ";
            temp.push_back(ans[j][i]);
        }
        t.push_back(temp);
        //cout<<endl;
    }
    // for(auto i:t){
    //     reverse(i.begin(),i.end());
    //     for(auto j:i){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=r-1;i>=0;i--){
        reverse(t[i].begin(),t[i].end());
        for(int j=0;j<c;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    
    

}
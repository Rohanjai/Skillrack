#include <bits/stdc++.h>
 
using namespace std;
vector<vector<int>> transpose(vector<vector<int>> &arr,int &r,int &c){
    vector<vector<int>> ans(c,vector<int>(r));
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            ans[i][j]=arr[j][i];
        }
    }
    return ans;
    
}
int main(int argc, char** argv)
{
    int r,c,ind=0;
    cin>>r>>c;
    vector<vector<int>>arr(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
            string s = to_string(arr[i][j]);
            reverse(s.begin(),s.end());
            arr[i][j]=stoi(s);
        }
        
    }
    arr=transpose(arr,r,c);
    for(auto &i:arr){
        sort(i.begin(),i.end());
    }
    arr=transpose(arr,c,r);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

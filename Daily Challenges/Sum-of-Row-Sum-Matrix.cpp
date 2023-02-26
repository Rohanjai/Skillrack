#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>>arr;
    for(int i=0;i<r;i++){
        vector<int> x;
        for(int j=0;j<c;j++){
            int t;
            cin>>t;
            x.push_back(t);
        }
        arr.push_back(x);
    }
    for(int i=0;i<r;i++){
        int x = accumulate(arr[i].begin(),arr[i].end(),0);
        for(int j:arr[i]){
            cout<<j<<" ";
        }
        cout<<x<<endl;
    }


}
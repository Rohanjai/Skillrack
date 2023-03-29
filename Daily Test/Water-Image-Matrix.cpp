#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> arr;
    for(int i=0;i<r;i++){
        vector<int> t;
        for(int j=0;j<c;j++){
            int temp;
            cin>>temp;
            t.push_back(temp);
        }
        arr.push_back(t);
    }
    for(int i=0;i<r/2;i++){
        if(arr[i]!=arr[r-i-1]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";


}
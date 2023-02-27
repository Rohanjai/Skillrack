#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int> s,arr;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        s.push_back(t);
    }
    for(int i:s){
        for(int j=0;j<i;j++){
            int t;
            cin>>t;
            arr.push_back(t);
        }
    }
    sort(arr.begin(),arr.end());
    for(auto i:arr){
        cout<<i<<" ";
    }


}
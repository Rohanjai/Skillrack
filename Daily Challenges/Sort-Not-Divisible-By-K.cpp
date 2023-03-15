#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,k;
    cin>>n>>k;
    vector<int> arr,mat;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
        if(t%k!=0){
            mat.push_back(t);
        }
    }
    sort(mat.begin(),mat.end());
    int ind=0;
    for(int &i:arr){
        if(i%k!=0){
            i=mat[ind++];
        }
    }
    for(auto i:arr){
        cout<<i<<" ";
    }


}
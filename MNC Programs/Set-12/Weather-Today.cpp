#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool print=false;
    for(int i:arr){
        if(!(i>=x and i<=y)){
            cout<<i<<" ";
            print=true;
        }
    }
    if(!print){
        cout<<"-1";
    }


}
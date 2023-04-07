#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r,c;
    bool print=false;
    cin>>r>>c;
    vector<vector<int>> arr(c,vector<int>(r));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[j][i];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            bool odd=all_of(arr[j].begin(),arr[j].end(),[](int x){
                return x%2==0;
            });
            bool even=all_of(arr[j].begin(),arr[j].end(),[](int x){
                return x%2!=0;
            });
            if(odd or even)
            {
                print=true;
                cout<<arr[j][i]<<" ";
            }
        }
        if(print)
        cout<<endl;
    }
    if(!print){
        cout<<"-1";
    }


}
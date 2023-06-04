#include <bits/stdc++.h>
 
using namespace std;

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
    for(int i=0;i<r;i++){
        if((i+1)%2==0){
            reverse(arr[i].begin(),arr[i].end());
        }
    }
    for(int i=0;i<c;i++){
        if((i+1)&1){
            int beg=0,end=r-1;
            while(beg<end){
                swap(arr[beg][i],arr[end][i]);
                beg++;
                end--;
            }
        }
    }
    for(auto &i:arr){
        for(auto &j:i)
        cout<<j<<' ';
        cout<<endl;
    }


}

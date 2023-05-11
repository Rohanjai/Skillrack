#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int m,n;
    cin>>m>>n;
    vector<int>arr(m),mat(n);
    for(int i=0;i<m;i++) cin>>arr[i];
    for(int i=0;i<n;i++) cin>>mat[i];
    for(int i:mat){
        int j;
        for(j=arr.size()-1;j>=0;j--){
            if(arr[j]==i){
                break;
            }
        }
        if(find(arr.begin(),arr.end(),i)!=arr.end())
        arr.erase(arr.begin()+j);
    }
    for(int i:arr){
        cout<<i<<" ";
    }


}

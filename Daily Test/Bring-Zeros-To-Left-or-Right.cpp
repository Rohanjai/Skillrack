#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        vector<int> arr(c);
        for(int j=0;j<c;j++){
            cin>>arr[j];
        }
        if(i%2==0)
            sort(arr.begin(),arr.end());
        else
            sort(arr.begin(),arr.end(),greater<int>());
        for(auto &j:arr){
            cout<<j<<" ";
        }
        cout<<endl;
    }


}
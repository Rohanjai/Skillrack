#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int t;
    vector<int>arr,ans;
    while(cin>>t){
        arr.push_back(t);
    }
    int max=arr[arr.size()-1];
    ans.push_back(max);
    
    for(int i=arr.size()-2;i>=0;i--){
        if(arr[i]>max){
            ans.push_back(arr[i]);
            max=arr[i];
        }
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }


}
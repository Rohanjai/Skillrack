#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    vector<string> arr,ans;
    while(cin>>s){
        arr.push_back(s);
    }
    if(arr.size()==1){
        cout<<arr[0];
        return 0;
    }
    if(arr[0]!=arr[1]){
        ans.push_back(arr[0]);
    }
    for(int i=1;i<arr.size()-1;i++){
        if(arr[i] != arr[i-1] and arr[i] !=arr[i+1]){
            ans.push_back(arr[i]);
        }
    }
    if(arr[arr.size()-2]!=arr[arr.size()-1]){
        ans.push_back(arr[arr.size()-1]);
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    


}
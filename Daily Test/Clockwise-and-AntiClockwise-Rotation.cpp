#include <bits/stdc++.h>
 
using namespace std;
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }
    int x,y;
    cin>>x>>y;
    if(x>arr.size()){
        x%=arr.size();
    }
    if(y>arr.size()){
        y%=arr.size();
    }
    rotate(arr.begin(),arr.begin()+arr.size()-x,arr.end());
    //vector<int> arr1(arr.begin(),arr.end());
    rotate(arr.begin(),arr.begin()+y,arr.end());
    for(int i:arr){
        cout<<i<<" ";
    }
    


}
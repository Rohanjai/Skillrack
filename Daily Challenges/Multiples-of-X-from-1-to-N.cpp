#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x;
    cin>>n>>x;
    vector<int> arr;
    for(int i=1;i*x<=n;i++){
        arr.push_back(i*x);
    }
    for(int i=0;i<arr.size()/2;i++){
        cout<<arr[i]<<" "<<arr[arr.size()-i-1]<<" ";
    }
    if(arr.size()&1){
        cout<<arr[arr.size()/2];
    }

}
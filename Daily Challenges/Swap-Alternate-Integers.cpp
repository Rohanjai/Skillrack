#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-2;i+=3){
        swap(arr[i],arr[i+2]);
        
    }
    for(auto &i:arr){
        cout<<i<<" ";
    }


}
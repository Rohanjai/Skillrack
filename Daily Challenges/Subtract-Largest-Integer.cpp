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
    int x = *max_element(arr.begin(),arr.end());
    for(int i:arr){
        cout<<x-i<<" ";
    }


}
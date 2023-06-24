#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x = *max_element(arr.begin(),arr.end());
    for(int i:arr){
        if(i==x) continue;
        else
        if(i*k>x){
            cout<<"-1";
            return 0;
        }
    }
    cout<<x;


}

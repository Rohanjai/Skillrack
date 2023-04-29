#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=i=0;i<n;i++){
        if(n-k<=i){
            cout<<arr[i]*-1<<" ";
        }
        else{
            cout<<arr[i]<<" ";
        }
    }


}

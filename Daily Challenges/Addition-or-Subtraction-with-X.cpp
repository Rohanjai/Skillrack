#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[n],x;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    for(int i:arr){
        if(i&1){
            cout<<i-x<<" ";
        }
        else{
            cout<<i+x<<" ";
        }
    }


}
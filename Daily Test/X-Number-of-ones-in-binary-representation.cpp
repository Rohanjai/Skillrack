#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        int ctr=0;
        int k=arr[i];
        while(k>0){
            if(k&1){
                ctr++;
            }
            k=k>>1;
        }
        if(ctr==x){
            cout<<arr[i]<<" ";
            flag=true;
        }
        ctr=0;
    }
    if(!flag){
        cout<<"-1";
    }

}
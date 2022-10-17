#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[n],ctr=0,t=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        t=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                t++;
            }    
        }
        if(t>1){
            ctr++;
        }
        //cout<<ctr<<endl;
    }
    cout<<ctr;

}
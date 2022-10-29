#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x;
    cin>>n>>x;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int sum=0;
    bool print=false;
    for(int i=0;i<n;i++){
        int t=arr[i],ctr=0;
        while(t>0){
            t/=10;
            ctr++;
        }
        if(ctr==x){
            print=true;
            sum+=arr[i];        
        }
    }
    if(print){
        cout<<sum;
    }
    else{
        cout<<-1;
    }


}
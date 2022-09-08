#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int ctr=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]!=1 and arr[i]==0 and arr[i+1]!=1){
            ctr++;
            arr[i]=1;
            if(ctr==k)
            {
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"No";


}
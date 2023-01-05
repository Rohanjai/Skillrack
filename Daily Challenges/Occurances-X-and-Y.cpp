#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int x,y;
    cin>>x>>y;
    int ctr1=count(arr,arr+n,x);
    int ctr2=count(arr,arr+n,y);
    cout<<(ctr1>=ctr2 ? "YES" : "NO");

}
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
    int x;
    cin>>x;
    if(count(arr,arr+n,x)==x){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


}
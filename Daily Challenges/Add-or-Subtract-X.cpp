#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    for(int i:arr){
        cout<<(i<k ? i+k : i-k)<<" ";
    }
    


}
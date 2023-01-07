#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>x){
            arr[i]++;
        }
    }
    int sum=0;
    sum=accumulate(arr,arr+n,sum);
    cout<<sum;


}
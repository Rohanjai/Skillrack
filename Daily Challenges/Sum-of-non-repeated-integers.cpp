#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,sum=0;
    bool printed=false;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(count(arr,arr+n,arr[i])==1){
            sum+=arr[i];
            printed=true;
        }
    }
    if(printed){
        cout<<sum;
    }
    else
    cout<<-1;

}
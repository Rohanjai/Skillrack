#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    for(int i=0;i<n;i+=x){
        int sum=0;
        for(int j=i;j<i+x;j++){
            sum+=arr[j];
        }
        cout<<sum<<" ";
    }


}
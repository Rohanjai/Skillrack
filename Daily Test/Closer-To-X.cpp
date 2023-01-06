#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    long long int x;
    cin>>n>>x;
    long long int arr[n],ans[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        ans[i]=abs(arr[i]-x);
    }
    int b = *min_element(ans,ans+n);
    for(int i=0;i<n;i++){
        if(ans[i]==b){
            cout<<arr[i]<<" ";
        }
    }


}
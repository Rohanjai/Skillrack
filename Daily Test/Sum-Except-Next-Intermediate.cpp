#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x or arr[i-1]==x){
            
            continue;
        }
        else{
            s+=arr[i];
        }
    }
    cout<<s;

}

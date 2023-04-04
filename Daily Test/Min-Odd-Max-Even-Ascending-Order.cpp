#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int x=INT_MAX,y=INT_MIN;
    bool f1=false,f2=false;
    for(int i=0,j=n-1;i<n and j>=0;i++,j--){
        if(arr[i]&1 and !f1){
            x=arr[i];
            f1=true;
        }
        if(arr[j]%2==0 and !f2){
            y=arr[j];
            f2=true;
        }
        if(f1 and f2){
            break;
        }
    }
   //cout<<x<<" "<<y;
    for(int i=min(x,y);i<=max(x,y);i++){
        cout<<i<<" ";
    }
    

}
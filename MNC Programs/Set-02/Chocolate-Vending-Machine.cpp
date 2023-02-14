#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,k,c;
    cin>>n>>k>>c;
    vector<int> arr(c);
    int t=n;
    for(int i=0;i<c;i++){
        cin>>arr[i];
    }
    for(int i=0;i<c;i++){
        cout<<"Customer: "<<i+1<<endl;
        if(arr[i]<=n){
            n-=arr[i];
            cout<<"Number of chocolates sold: "<<arr[i]<<endl;
            if(n<=k){
                n=t;
            }
            cout<<"Number of chocolates available: "<<n<<endl;
        }
        else if(arr[i]>n){
            cout<<"Invalid"<<endl;
        }
    }

}
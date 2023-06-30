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
    int m=0;
    for(int i=0;i<n;i++){
        if(arr[i]%x==0){
            m=arr[i];
            
        }
        if(m!=0){
            arr[i]=m;
        }
    }
    for(int &i:arr)
        cout<<i<<" ";
    


}

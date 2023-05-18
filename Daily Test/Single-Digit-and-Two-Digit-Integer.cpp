#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool s=false,t=false;
    
    for(int i:arr){
        if(i<=9){
            s=true;
            cout<<i<<" ";
        }
        
    }
    cout<<(!s ? "-1":"")<<endl;
    for(int i:arr){
        if(i>9 and i<100){
            t=true;
            cout<<i<<" ";
        }
    }
    cout<<(!t ? "-1":"");
    

}

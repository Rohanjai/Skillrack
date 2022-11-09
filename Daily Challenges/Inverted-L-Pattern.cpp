#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i&1){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        if(!(i&1)){
            cout<<i<<endl;
        }
    }


}
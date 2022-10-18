#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i<n/2){
            cout<<i*2;
        }
        else{
            cout<<i*3;
        }
        cout<<" ";
    }


}
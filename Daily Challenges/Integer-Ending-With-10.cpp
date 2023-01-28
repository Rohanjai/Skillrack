#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    bool print=false;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if((t/10%10)==1 and t%10==0){
            cout<<t<<" ";
            print=true;
        }
    }
    if(!print)
        cout<<"-1";

}
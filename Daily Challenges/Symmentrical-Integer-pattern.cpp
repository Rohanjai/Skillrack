#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    cout<<0<<endl;
    int val=n,temp=n;
    for(int i=1;i<=n;i++){
        for(val=temp;val<=n;val++){
            cout<<val;
        }
        cout<<0;
        for(val=n;val>=temp;val--){
            cout<<val;
        }
        temp--;
        cout<<endl;
    }


}
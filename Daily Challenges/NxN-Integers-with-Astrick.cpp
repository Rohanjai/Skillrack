#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,cnt=1;;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<i;j++){
            cout<<"*";
        }
        for(int j=i;j<=n;j++){
            cout<<cnt++;
        }
        cout<<endl;
    }


}
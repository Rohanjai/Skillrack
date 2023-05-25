#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,cnt=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<cnt++;
            if(i!=j){
                cout<<"*";
            }
        }
        cout<<endl;
    }


}

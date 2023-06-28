#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,cnt=1;
    cin>>n;
    char c='a';
    for(int i=0;i<n;i++){
        cout<<(i%2==0 ? '*':'-');
        for(int j=0;j<n;j++){
            if(c>'z') c='a';
            if(i%2==0) cout<<c++;
            else cout<<cnt++;
            cout<<(i%2==0 ? '*':'-');
        }
        cout<<endl;
    }


}

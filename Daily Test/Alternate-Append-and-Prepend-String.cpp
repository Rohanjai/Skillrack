#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s,ans="";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s;
        if(i&1){
            ans+=s;
        }
        else{
            ans=s+ans;
        }
    }
    cout<<ans;

}
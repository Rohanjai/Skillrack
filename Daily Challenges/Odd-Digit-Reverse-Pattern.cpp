#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    bool f = false;
    cin>>s;
    for(int i=s.size()-1;i>=0;i--){
        for(int j=i;j>=0;j--){
            int x = s[j]-'0';
            if(x&1){
                cout<<x<<" ";
                f=true;
            }
        }
    }
    if(!f) cout<<"-1";

}

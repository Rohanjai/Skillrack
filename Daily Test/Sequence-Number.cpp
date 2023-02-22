#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    
    long long int i,n=s.length()-1,k=0,t=1;
    
    for(i=n;i>=0;i--){
        k+=(s[i]-'a'+1)*t;
        t*=26;
    }
    cout<<k;

}
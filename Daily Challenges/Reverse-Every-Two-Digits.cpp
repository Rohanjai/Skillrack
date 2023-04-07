#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s,ans="0";
    cin>>s;
    for(int i=0;i<s.size();i+=2){
        ans+=s[i+1];
        ans+=s[i];
    }
    long x = stol(ans);
    cout<<x;

}
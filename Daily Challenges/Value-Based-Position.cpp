#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int l = s.size();
    for(int i=0;i<l;i++){
        int x = s[i]-'0';
        cout<<fixed<<setprecision(0)<<x*pow(10,l-i-1)<<" ";
    }


}
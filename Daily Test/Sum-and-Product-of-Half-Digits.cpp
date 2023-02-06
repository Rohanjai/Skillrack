#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int pro=1,sum=0;
    for(int i=0;i<s.size()/2;i++){
        pro*= (int)(s[i] - '0');
    }
    for(int i=s.size()/2;i<s.size();i++){
        sum+=(int)(s[i] - '0');
    }
    cout<<sum+pro;


}
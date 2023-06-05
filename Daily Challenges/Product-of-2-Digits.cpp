#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    if(s.size()&1){
        for(int i=0;i<s.size()-1;i+=2){
            int a = s[i+1] -'0';
            int b = s[i] -'0';
            cout<<a*b<<' ';
        }
        cout<<s[s.size()-1];
    }
    else{
        for(int i=0;i<s.size();i+=2){
            int a = s[i+1] - '0';
            int b = s[i] - '0';
            cout<<a*b<<" ";
        }
    }


}

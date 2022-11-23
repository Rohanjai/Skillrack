#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int len=s.length()/2;
    for(int i=0;i<len;i++){
        cout<<s[i+len]<<s[i];
    }


}
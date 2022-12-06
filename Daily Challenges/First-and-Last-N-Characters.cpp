#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    string s;
    cin>>s>>n;
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    for(int i=s.length()-n;i<s.length();i++){
        cout<<s[i];
    }


}
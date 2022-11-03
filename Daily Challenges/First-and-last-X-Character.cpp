#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int x;
    cin>>s>>x;
    cout<<s.substr(0,x)<<s.substr(s.length()-x);
}
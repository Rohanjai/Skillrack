#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s1,s2;
    int x;
    cin>>s1>>s2>>x;
    cout<<s1.substr(0,x)<<s2.substr(s2.size()-x,s2.size());


}
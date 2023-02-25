#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    long long x=stol(s);
    reverse(s.begin(),s.end());
    long long y=stol(s);
    long long z = abs(x-y);
    long long ctr=0;
    while(z%2==0){
        ctr++;
        z/=2;
    }
    cout<<ctr;
    
}
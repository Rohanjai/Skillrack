#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    long long x,y;
    cin>>x>>y;
    int s1=x%10,s2=y%10;
    x/=10; y/=10;
    x=x*10+s2; y=y*10+s1;
    cout<<x*y;


}
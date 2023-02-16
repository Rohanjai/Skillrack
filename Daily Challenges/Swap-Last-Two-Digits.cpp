#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int x,y;
    cin>>x>>y;
    int a=x%100,b=y%100;
    x/=100;y/=100;
    x*=100;y*=100;
    x+=b;y+=a;
    cout<<x*y;


}
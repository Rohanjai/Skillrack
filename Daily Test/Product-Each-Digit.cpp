#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string x,y;
    cin>>x>>y;
    for(int i=0;i<x.length();i++){
        int a=(int)x[i]-'0';
        int b=(int)y[i]-'0';
        cout<<a*b<<" ";
    }
    


}
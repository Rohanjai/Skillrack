#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string x,y,z;
    cin>>x>>y;
    z=x+y;
    long long int a=stol(z);
    long long int b=sqrt(a);
    if(b*b==a){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }


}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r1,r2,n,x;
    cin>>r1>>n>>r2>>x;
    int t=ceil(x/60.0);
    if(t<=n){
        cout<<r1*t;
    }
    else{
        int a=r1*n;
        int b=r2*(t-n);
        cout<<a+b;
    }
    

}
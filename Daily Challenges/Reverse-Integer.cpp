#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    long long int n,rev=0;
    bool neg=false;
    cin>>n;
    if(n<0){
        neg=true;
        n*=-1;
    }
    while(n>0){
        int t=n%10;
        rev=(rev*10)+t;
        n/=10;
    }
    
    cout<<(neg ? rev*-1: rev);


}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int p=1,res=0;
    while(n>0){
        res=(res+((n%10)*p));
        p*=2;
        n/=10;
    }
    cout<<res;


}
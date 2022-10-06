#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,ctr=0,val=1;
    cin>>n;
    while(val<=n){
        val*=10;
        ctr++;
    }
    cout<<ctr;
    return 0;

}
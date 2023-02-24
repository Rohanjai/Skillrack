#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int e,r,t,sum=0;
    cin>>e>>r>>t;
    sum=e;
    for(int i=1;i<t;i++){
        e+=r;
        sum+=e;
    }
    cout<<sum;


}
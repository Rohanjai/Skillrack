#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x;
    cin>>n>>x;
    int cur,sum=0,ctr=1;
    while(ctr<=n){
        cin>>cur;
        sum+=(pow(x,cur))
        ctr++;
    }
    cout<<sum/x;


}
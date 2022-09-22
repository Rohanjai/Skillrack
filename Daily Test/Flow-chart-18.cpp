#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    long long int sum=0,ctr=1;
    while(ctr<=n){
        long long int a=pow(ctr,3);
        sum+=a;
        ctr++;
    }
    cout<<sum;
}
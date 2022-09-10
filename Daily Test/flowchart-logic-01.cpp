#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int m,n,temp;
    cin>>m;
    temp=m;
    n=0;
    while(temp>0){
        n=(n*10)+(temp%10);
        temp/=10;
    }
    while(m>0){
        cout<<n%10<<m%10;
        m/=10;
        n/=10;
    }
}
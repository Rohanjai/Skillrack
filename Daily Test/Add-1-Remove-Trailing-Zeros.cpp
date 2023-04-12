#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    long n;
    cin>>n;
    n++;
    while(n%10==0){
        n/=10;
    }
    cout<<n;


}
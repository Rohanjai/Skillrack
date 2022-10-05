#include <bits/stdc++.h>
using namespace std;
int isprime(long long int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(int argc, char** argv)
{
    long long int n;
    cin>>n;
    n++;
    while(1){
        if(isprime(n)){
            cout<<n;
            return 0;
        }
        n++;
    }


}
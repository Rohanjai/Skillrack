#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        int x = n-i;
        if(isPrime(i) and isPrime(x)){
            cout<<i<<" "<<x;
            return 0;
        }
    }
    cout<<"-1";
    


}
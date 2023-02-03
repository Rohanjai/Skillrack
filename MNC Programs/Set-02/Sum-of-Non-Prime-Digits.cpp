#include <bits/stdc++.h>
 
using namespace std;
bool isPrime(int n){
    if(n==0 or n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int sum=0;
    bool print=false;
    for(int i=0;i<s.length();i++){
        int t = s[i]-'0';
        if(!isPrime(t)){
            sum+=t;
            print=true;
        }
    }
    cout<<(print? sum : -1);


}
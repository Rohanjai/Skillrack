#include <bits/stdc++.h>
 
using namespace std;
bool isPrime(int n){
    if(n==1 || n==0){
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
    string x,y;
    cin>>x>>y;
    string s1="0",s2="0";
    for(char &i:x){
        int t=i-'0';
        if(!isPrime(t)){
            s1+=i;
        }
    }
    for(char &i:y){
        int t=i-'0';
        if(!isPrime(t)){
            s2+=i;
        }
    }
    long long int a=stoi(s1),b=stoi(s2);
    cout<<a+b;
    


}
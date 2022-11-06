#include <bits/stdc++.h>
 
using namespace std;
int isPrime(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(int argc, char** argv)
{
    string s;
    set<char> s1;
    cin>>s;
    for(char i: s){
        s1.insert(i);
    }
    for(auto it=s1.begin();it!=s1.end();it++){
        if(isPrime(count(s.begin(),s.end(),*it))){
            continue;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";


}
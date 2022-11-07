#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    long long int n= stol(s,nullptr,10);
    while(n>0){
        if((n%10)&1){
            cout<<1;
        }
        else{
            cout<<0;
        }
        n/=10;
    }


}
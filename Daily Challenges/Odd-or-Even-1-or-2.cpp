#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string n;
    cin>>n;
    for(char &c:n){
        int i=c-'0';
        if(i&1){
            c='2';
        }
        else{
            c='1';
        }
    }
    cout<<n;


}
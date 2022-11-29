#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x;
    cin>>n>>x;
    char c='`',t;
    t=c+x;
    string s="";
    s+=t;
    char ch='`';
    while(s.length()!=n){
        if(ch>t){
            ch='`';
            
        }
        ch++;
        if(ch>t){
            ch='`';
            ch++;
        }
        s+=ch;
    }
    cout<<s;

}
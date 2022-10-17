#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int x;
    cin>>s>>x;
    for(int i=0;i<x-1;i++){
        cout<<s[i];
    }
    for(int i=s.length()-1;i>=x-1;i--){
        cout<<s[i];
    }


}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if((i+1)&1){
            cout<<s[i];
        }
    }
    cout<<endl;
    for(int i=0;i<s.length();i++){
        if((i+1)%2==0){
            cout<<s[i];
        }
    }


}
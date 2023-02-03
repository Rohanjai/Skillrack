#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    for(int i=1;i<=s.length();i++){
        if(i==1){
            cout<<"(";
        }
        cout<<s[i-1];
        if(i==3){
            cout<<")";
        }
        if(i%3==0){
            cout<<" ";
        }
    }


}
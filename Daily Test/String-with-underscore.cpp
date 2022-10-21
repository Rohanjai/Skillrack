#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(isspace(s[i])){
            cout<<"_";
        }
        else{
            cout<<s[i];
        }
    }


}
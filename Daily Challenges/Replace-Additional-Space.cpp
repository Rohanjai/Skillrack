#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i+1]==' ' and s[i]!=' '){
            cout<<s[i]<<" ";
            i+=1;
        }
        else if(s[i]==' '){
            cout<<"*";
        }
        else{
            cout<<s[i];
        }
    }


}
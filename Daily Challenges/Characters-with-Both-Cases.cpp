#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    for(char c:s){
        char ch;
        if(isupper(c)){
            ch=tolower(c);
        }
        else if(islower(c)){
            ch=toupper(c);
        }
        if(s.find(ch)!=string::npos){
            cout<<c;
        }
    }


}
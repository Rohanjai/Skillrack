#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    char ch=s[0];
    for(char c:s){
        if(ch>=c){
            ch=c;
        }
    }
    cout<<ch;


}
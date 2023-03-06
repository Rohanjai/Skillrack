#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    string vowels="aeiou";
    int l=vowels.size(),ctr=0;
    for(char &c:s){
        auto it = vowels.find(c);
        if(it!=string::npos){
            c=vowels[ctr++];
            if(ctr==l){
                ctr%=l;
            }
            
        }
    }
    cout<<s;


}
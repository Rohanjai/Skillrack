#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int ctr=0;
    for(char &c: s){
        if(!isalpha(c) and !isdigit(c)){
            ctr++;
        }
    }
    cout<<ctr;


}
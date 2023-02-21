#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    string s,t;
    cin>>s;
    for(char &c:s){
        if(isalpha(c)){
            c=',';
        }
        cout<<c;
    }
    

}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    bool alpha=false,num=false;
    for(char &c:s){
        if(isdigit(c)){
            num=true;
        }
        else{
            alpha=true;
        }
    }
    if(alpha and num){
        cout<<"alphanumeric";
    }
    else if(alpha and !num){
        cout<<"alpha";
    }
    else{
        cout<<"numeric";
    }


}
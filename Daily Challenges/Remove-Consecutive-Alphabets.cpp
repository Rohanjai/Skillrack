#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    bool up=false,low=false;
    for(char c : s){
        if(isupper(c) and !up){
            up=true;
            low=false;
            cout<<c;
        }
        else if(islower(c) and !low){
            up=false;
            low=true;
            cout<<c;
        }
    }
    


}
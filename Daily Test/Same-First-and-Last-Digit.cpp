#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    bool print=false;
    while(n--){
        string s;
        cin>>s;
        if(s[0]==s[s.length()-1]){
            cout<<s<<" ";
            print=true;
        }
    }
    if(!print){
        cout<<"-1";
    }


}
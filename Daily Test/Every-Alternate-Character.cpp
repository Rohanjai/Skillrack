#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int n;
    cin>>s>>n;
    bool sw=false;
    for(int i=0;i<s.size();i+=n){
        if(!sw){
            for(int j=i;j<i+n and j<s.length();j++){
                cout<<s[j];
            }
            
        }
        sw=!sw;
    }
    

}
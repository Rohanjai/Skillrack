#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1] and s[i+1]==s[i+2]){
            cout<<"invalid";
            return 0;
        }
    }
    cout<<"valid";


}
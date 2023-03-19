#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    for(int i=1;i<s.size()-1;i++){
        if(s[i]=='*' and (s[i+1]!=s[i-1])){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";


}
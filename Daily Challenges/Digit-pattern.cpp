#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        cout<<"|";
        for(int j=1;j<=int(s[i]- '0');j++){
            cout<<'*';
        }
        cout<<endl;
    }


}
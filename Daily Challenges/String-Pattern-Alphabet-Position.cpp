#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        int x = s[i] - 'a' + 1;
        for(int j=0;j<x;j++){
            cout<<s[i];
        }
        cout<<endl;
    }


}
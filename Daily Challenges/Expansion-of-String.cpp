#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    vector<string> a;
    for(int i=0;i<s.length();i++){
        a.push_back(s.substr(i));
    }
    reverse(a.begin(),a.end());
    for(string c: a){
        cout<<c;
    }


}
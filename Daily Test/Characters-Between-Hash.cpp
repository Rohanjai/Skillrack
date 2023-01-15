#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    vector<int> pos;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='#'){
            pos.push_back(i);
        }
    }
    for(int i=1;i<pos.size();i++){
        cout<<s.substr(pos[i-1]+1,pos[i]-pos[i-1]-1);
    }


}
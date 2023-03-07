#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++){
        string a = s.substr(0,i);
        string b = s.substr(i);
        int x = stoi(a);
        int y = stoi(b);
        cout<<x*y<<" ";
    }
    


}
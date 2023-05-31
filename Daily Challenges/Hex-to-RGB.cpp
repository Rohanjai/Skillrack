#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    cout<<"(";
    for(int i=1;i<s.size();i+=2){
        string a = s.substr(i,2);
        cout<<stoi(a,nullptr,16);
        cout<<(i+2>=s.size()?")":",");
    }
}

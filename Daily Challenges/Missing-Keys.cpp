#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(char ch='a' ;ch<='z';ch++){
        if(s.find(ch)==string::npos){
            cout<<ch;
        }
    }


}
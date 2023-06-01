#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int x;
    cin>>s>>x;
    for(int i=0;i<s.size();i+=x){
        swap(s[i],s[i+x-1]);
    }
    cout<<s;


}

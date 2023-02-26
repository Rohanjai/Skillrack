#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int k;
    cin>>s>>k;
    int l=s.size();
    int x = (k-1)%l;
    while(x!=l-1){
        cout<<s[x];
        x=(x+k)%l;
    }
    cout<<s[l-1];

}
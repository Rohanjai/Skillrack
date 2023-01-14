#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int x;
    cin>>s>>x;
    for(int i=0;i<s.length();i++){
        if((i+1)%x==0){
            cout<<s[i]<<endl;
            continue;
        }
        cout<<s[i];
    }


}
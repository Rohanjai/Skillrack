#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int n;
    cin>>s>>n;
    for(int i=0;i<s.size();i++){
        if((i+1)%n!=0){
            cout<<s[i];
        }
    }


}

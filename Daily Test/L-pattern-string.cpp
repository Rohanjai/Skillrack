#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int len=s.length();
    for(int i=0;i<s.length();i++){
        if(i<len/2){
            cout<<s[i]<<endl;
        }
        else{
            cout<<s[i]<<" ";
        }
    }


}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int l=s.size();
    for(int i=0;i<l;i++){
        if(l%(i+1)==0){
            cout<<s[i];
        }
    }


}
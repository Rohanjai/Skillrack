#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int n;
    cin>>s>>n;
    int ctr=0;
    for(int i=0;;i++){
        for(int j=0;j<n;j++){
            if(ctr<s.length()){
                cout<<s[ctr];
                ctr++;
            }
            else{
                cout<<'*';
            }
        }
        if(ctr>=s.length()){
            break;
        }
        cout<<endl;
    }


}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int n;
    cin>>s>>n;
    int ctr=0;
    cout<<s[ctr++]<<endl;
    while(true){
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<"*";
            }
            cout<<s[ctr++]<<endl;
            if(ctr==s.length()){
                return 0;
            }
        }
        for(int i=n-1;i>0;i--){
            for(int j=1;j<i;j++){
                cout<<"*";
            }
            cout<<s[ctr++]<<endl;
            if(ctr==s.length()){
                return 0;
            }
        }
    }


}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int n = s.length();
    if(n&1){
        for(int i=0,j=(n/2)+1;i<(n/2),j<n;j++,i++){
            if(s[i]!=s[j]){
                cout<<"no";
                return 0;
            }
        }
        cout<<"yes";
    }
    else{
        for(int i=0,j=n/2;i<n/2,j<n;i++,j++){
            if(s[i]!=s[j]){
                cout<<"no";
                return 0;
            }
        }
        cout<<"yes";
    }


}
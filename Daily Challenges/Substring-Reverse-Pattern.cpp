#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    for(int i=0;i<=s.length()/2;i++){
        for(int j=0;j<i;j++){
            cout<<'*';
        }
        if(!(i&1)){
            for(int j=i;j<s.length()-i;j++){
                cout<<s[j];
            }
        }
        else{
            for(int j=s.length()-i-1;j>=i;j--){
                cout<<s[j];
            }
        }
        cout<<endl;
    }
    


}
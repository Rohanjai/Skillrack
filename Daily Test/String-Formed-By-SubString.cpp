#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    for(int i=1;i<s.size()/2+1;i++){
        string sub="";
        int j=0;
        string temp=s.substr(0,i);
        if(s.size()%i==0){
            for(int j=0;j<s.size()/i;j++)
            sub+=temp;
        }
        if(sub==s){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";


}

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s,ans="";
    cin>>s;
    long long x = stol(s);
    if(x%2==0){
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                ans+=s[i];
            }
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            if(i%2!=0){
                ans+=s[i];
            }
        }
    }
    int ind=0;
    for(int i=0;i<ans.size();i++){
        if(ans[i]=='0'){
            ind++;
        }
        else{
            break;
        }
    }
    cout<<ans.substr(ind);

}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s,ans="";
    bool sw=true,f=false;
    int x;
    cin>>s>>x;
    string sub1=s.substr(0,x),sub2=s.substr(s.size()-x,x);
    while(true){
        if(sw){
            for(char &c:sub1){
                if(ans.size()!=s.size()){
                    ans+=c;
                }
                else{
                    f=true;
                    break;
                }
            }
            if(f){
                break;
            }
        }
        else{
            for(char &c:sub2){
                if(ans.size()!=s.size()){
                    ans+=c;
                }
                else{
                    f=true;
                    break;
                }
            }
            if(f){
                break;
            }
        }
        sw=!sw;
    }
    cout<<ans;

}

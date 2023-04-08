#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int x,y;
    cin>>x>>y;
    bool print=false;
    for(int i=x;i<=y;i++){
        string s=to_string(i);
        int oc=0,ec=0;
        for(char &c:s){
            int ch = c-'0';
            if(ch&1){
                oc++;
            }
            else{
                ec++;
            }
        }
        if(oc>=2 and ec>=2){
            cout<<s<<" ";
            print=true;
        }
    }
    if(!print){
        cout<<"-1";
    }


}
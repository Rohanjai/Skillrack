#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    bool done=false;
    int ctr=0;
    reverse(s.begin(),s.end());
    for(int i=1;;i++){
        for(int j=1;j<=i;j++){
            if(ctr<s.length()){
                cout<<s[ctr]<<" ";
                ctr++;
            }
            else{
                cout<<"* ";
                done=true;
            }
        }
        if(done or ctr==s.length()){
            break;
        }
        cout<<endl;
    }


}
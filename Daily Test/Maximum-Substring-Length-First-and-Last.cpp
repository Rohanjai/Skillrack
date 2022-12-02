#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int len=s.length(),sublen=0;
    string t=s;
    reverse(t.begin(),t.end());
    for(int i=0;i<len-1;i++){
        if(s[i]!=t[i]){
            break;
        }
        sublen++;
    }
    if(sublen==0){
        cout<<-1;
        return 0;
    }
    cout<<sublen;
}
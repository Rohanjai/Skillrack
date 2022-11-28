#include <bits/stdc++.h>
 
using namespace std;
int isVowel(char c){
    c=tolower(c);
    if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u'){
        return 1;
    }
    return 0;
}
int main(int argc, char** argv)
{
    string s,t="";
    cin>>s;
    for(char c:s){
        if(isVowel(c)){
            t+=c;
        }
    }
    string check=t;
    reverse(t.begin(),t.end());
    if(t.length()==0){
        cout<<-1;
        return 0;
    }
    if(check==t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


}
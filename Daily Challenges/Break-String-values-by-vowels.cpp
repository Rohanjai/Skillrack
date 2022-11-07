#include <bits/stdc++.h>
 
using namespace std;
bool isVowel(char ch){
    ch=tolower(ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u'){
        return true;
    }
    return false;
}
int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int vc=0,start=0,end=0;
    for(int i=0;i<s.length();i++){
        if(isVowel(s[i])){
            if(vc==1){
                end=i;
                cout<<s.substr(start,end-start)<<endl;
                start=end;
                vc=0;
            }
            
            vc++;
        }

    }
    if(start==end){
        cout<<s.substr(start,s.length()-start);
    }
    
}
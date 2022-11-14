#include <bits/stdc++.h>
 
using namespace std;
int isVowel(char ch){
    ch=tolower(ch);
    if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u'){
        return 1;
    }
    return 0;
}
int main(int argc, char** argv)
{
    int x,ctr=0;
    string s;
    cin>>s>>x;
    for(char c:s){
        if(isVowel(c)){
            ctr++;
        }
    }
    if(ctr>=x){
        ctr=0;
        for(char c:s){
            if(ctr==x){
                break;
            }
            if(isVowel(c)){
                cout<<c;
                ctr++;
            }
        }
    }
    else{
        cout<<-1;
    }


}
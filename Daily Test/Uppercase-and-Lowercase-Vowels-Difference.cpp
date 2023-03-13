#include <bits/stdc++.h>
 
using namespace std;
bool isVowel(char ch){
    ch=tolower(ch);
    return (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u');
}
int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int uc=0,lc=0;
    for(char &c:s){
        if(isupper(c) and isVowel(c)){
            uc++;
        }
        else if(islower(c) and isVowel(c)){
            lc++;
        }
    }
    cout<<abs(uc-lc);


}
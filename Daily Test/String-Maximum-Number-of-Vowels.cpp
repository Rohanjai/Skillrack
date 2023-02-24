#include <bits/stdc++.h>
 
using namespace std;
bool isVowel(char ch){
    ch=tolower(ch);
    return (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u');
}
int main(int argc, char** argv)
{
    string s1,s2;
    cin>>s1>>s2;
    int c1=0,c2=0;
    for(char &c:s1){
        if(isVowel(c)){
            c1++;
        }
    }
    for(char &c:s2){
        if(isVowel(c)){
            c2++;
        }
    }
    if(c1>c2){
        cout<<s1;
    }
    else if(c1==c2 and c1!=0){
        cout<<s1;
    }
    else if(c1<c2){
        cout<<s2;
    }
    else{
        cout<<"-1";
    }

}
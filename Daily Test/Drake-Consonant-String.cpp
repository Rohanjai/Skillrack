#include <bits/stdc++.h>
 
using namespace std;
bool isVowel(char ch){
    return (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u');
}
int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int ctr=0;
    for(char &c:s){
        if(!isVowel(c)){
            ctr++;
        }
    }
    for(char &c:s){
        cout<<ctr<<" ";
        if(!isVowel(c)){
            ctr--;
        }
    }


}
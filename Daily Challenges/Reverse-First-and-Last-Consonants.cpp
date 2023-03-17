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
    int i=0,j=s.size()-1;
    while(isVowel(s[i])){
        i++;
    }
    while(isVowel(s[j])){
        j--;
    }
    reverse(s.begin()+i,s.begin()+j+1);
    cout<<s;


}
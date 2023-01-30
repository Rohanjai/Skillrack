#include <bits/stdc++.h>
 
using namespace std;
bool isVowel(char ch){
    ch=tolower(ch);
    return ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u';
}
int main(int argc, char** argv)
{
    char c;
    cin>>c;
    c++;
    if(isVowel(c)){
        c++;
    }
    cout<<c;


}
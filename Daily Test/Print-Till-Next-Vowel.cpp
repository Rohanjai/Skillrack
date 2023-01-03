#include <bits/stdc++.h>
 
using namespace std;
bool isVowel(char ch){
    return (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u');
}
int main(int argc, char** argv)
{
    char ch;
    cin>>ch;
    cout<<ch;
    ch++;
    for(char c=ch;c<='z';c++){
        if(isVowel(c)){
            cout<<c;
            break;
        }
        else{
            cout<<c;
        }
    }


}
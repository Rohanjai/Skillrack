#include <bits/stdc++.h>
 
using namespace std;
bool isVowel(char ch){
    ch=tolower(ch);
    return (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u');
}
int main(int argc, char** argv)
{
    char c1,c2;
    cin>>c1>>c2;
    int ctr=0;
    for(char i=c1;i<=c2;i++){
        if(!isVowel(i)){
            ctr++;
        }
    }
    cout<<ctr;
    


}
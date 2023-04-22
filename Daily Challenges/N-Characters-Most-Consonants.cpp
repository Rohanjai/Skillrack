#include <bits/stdc++.h>
 
using namespace std;
bool isVowel(char ch){
    ch=tolower(ch);
    return (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u');
}
int countVc(string s){
    int cnt=0;
    for(char &c:s){
        if(!isVowel(c)){
            cnt++;
        }
    }
    return cnt;
}
int main(int argc, char** argv)
{
    string s;
    int x;
    cin>>s>>x;
    int a=countVc(s.substr(0,x)),b=countVc(s.substr(s.size()-x));
    cout<<(a==b?s:(a>b?s.substr(0,x):s.substr(s.size()-x)));    


}
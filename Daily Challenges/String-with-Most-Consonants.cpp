#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
    ch=tolower(ch);
    return (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u');
}
int countCons(string &s){
    int cnt=0;
    for(char c:s){
        if(isVowel(c)){
            cnt++;
        }
    }
    return s.size()-cnt;
}
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string ans="";
    int max=INT_MIN;
    for(string i:arr){
        int cnt=countCons(i);
        if(max<cnt){
            max=cnt;
            ans=i;
        }
    }
    cout<<ans;

}
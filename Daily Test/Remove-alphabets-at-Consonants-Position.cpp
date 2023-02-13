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
    vector<int> index;
    for(int i=0;i<s.size();i++){
        if(!isVowel(s[i])){
            index.push_back(i);
        }
    }
    int j=0;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(index[j]==i){
            j++;
            continue;
        }
        else{
            cout<<s[i];
        }
    }

}
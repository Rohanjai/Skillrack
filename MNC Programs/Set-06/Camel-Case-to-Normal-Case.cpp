#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    vector<string> arr;
    string temp=s.substr(0,1);
    for(int i=1;i<s.size();i++){
        if(isupper(s[i])){
            arr.push_back(temp);
            temp=s[i];
        }
        else{
            temp+=s[i];
        }
    }
    if(temp.size()>0){
        arr.push_back(temp);
    }
    for(auto &i : arr){
        transform(i.begin(),i.end(),i.begin(),::tolower);
        cout<<i<<" ";
    }

}
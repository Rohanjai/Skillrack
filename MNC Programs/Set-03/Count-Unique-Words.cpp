#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s,word;
    getline(cin,s);
    stringstream ss(s);
    unordered_map<string,int> st;
    while(ss >> word){
        st[word]++;
    }
    int ctr=0;
    for(auto i: st){
        if(i.second==1){
            ctr++;
        }
    }
    cout<<ctr;

}
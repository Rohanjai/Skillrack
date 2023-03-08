#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<pair<string,string>> arr;
    string s,ext;
    bool print=false;
    for(int i=0;i<n;i++){
        cin>>s;
        string word;
        stringstream ss(s);
        pair<string,string> p;
        int ctr=0;
        while(!ss.eof()){
            getline(ss,word,'.');
            if(ctr==0){
                p.first=word;
                ctr++;
            }
            else{
                p.second=word;
            }
        }
        arr.push_back(p);
    }
    cin>>ext;
    ext=ext.substr(1);
    int mx=0;
    for(auto i : arr){
        int l = i.first.size();
        if(i.second==ext and l>mx){
            mx=l;
        }
    }
    for(auto i: arr){
        if(i.first.size()==mx){
            cout<<i.first<<"."<<ext;
            print=true;
            break;
        }
    }
    if(!print){
        cout<<"FILE NOT FOUND";
    }


}
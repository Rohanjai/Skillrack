#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s,word;
    bool print=false;
    getline(cin,s);
    stringstream ss(s);
    string str="";
    while(ss >> word){
        str+=word;
    }
    transform(str.begin(),str.end(),str.begin(),::tolower);
    set<char> st(str.begin(),str.end());
    for(char ch='a';ch<='z';ch++){
        auto it = st.find(ch);
        if(it==st.end()){
            cout<<ch;
            print=true;
        }
    }
    if(!print){
        cout<<"0";
    }
    


}
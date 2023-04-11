#include <bits/stdc++.h>
 
using namespace std;
int main(){
    string s;  
    cin>>s;
    set<char> st;
    for(char &c:s){
        if(st.find(c)!=st.end()){
            st.erase(c);
        }
        else{
            cout<<c;
            st.insert(c);
        }
    } 
}
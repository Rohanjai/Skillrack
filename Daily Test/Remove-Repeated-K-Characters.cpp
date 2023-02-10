#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int k;
    cin>>s>>k;
    stack<char> st;
    int ctr=0;
    for(char &c:s){
        if(st.empty() or st.top()!=c){
            st.push(c);
            ctr=1;
        }
        else if(st.top()==c){
            st.push(c);
            ctr++;
        }
        if(k==ctr){
            while(ctr>0){
                st.pop();
                ctr--;
            }
        }
    }
    string ans="";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;


}
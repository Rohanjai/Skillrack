#include <bits/stdc++.h>
 
using namespace std;

string match(string s){
    string ans ="";
    ans += "1";
    for(int i =1; i<s.size(); i++){
        if(s[i]==s[i-1]){
            ans+=ans.back();
        }else{
            ans+= ans.back()=='1' ? "0" : "1";
        }
    }
    return ans;
}
int main(int argc, char** argv)
{
    string p;
    cin >> p;
    string pat = match(p);
    string s;
    int ok = 1;
    while(cin >> s){
        if(pat == match(s)) {
            cout << s << " ";
            ok= 0;
        }
    }
    if(ok) cout << -1;
}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int cnt = count_if(s.begin(),s.end(),[](auto a){
        a=tolower(a);
        return (a=='a' or a=='e' or a=='i' or a=='o' or a=='u');
    });
    int ind=(cnt==0 ? -1 : (cnt&1 ? 0 : 1));
    if(ind==-1){
        cout<<ind;
        return 0;
    }
    for(int i=ind;i<s.size();i+=2){
        cout<<s[i];
    }

}

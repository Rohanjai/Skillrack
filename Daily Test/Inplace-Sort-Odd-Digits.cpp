#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s,t;
    cin>>s;
    t=s;
    sort(s.begin(),s.end());
    vector<int> odd;
    for(char &c:s){
        int x=c-'0';
        if(x&1){
            odd.push_back(x);
        }
    }
    int i=0;
    for(char &c:t){
        int x=c-'0';
        if(x&1){
            cout<<odd[i++];
        }
        else{
            cout<<c;
        }
    }


}
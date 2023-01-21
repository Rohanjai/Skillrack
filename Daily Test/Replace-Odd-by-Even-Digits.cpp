#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    vector<int> even;
    vector<int> odd;
    for(char &c:s){
        int t = c-'0';
        if(t&1){
            odd.push_back(t);
        }
        else{
            even.push_back(t);
        }
    }
    int ctr1=0,ctr2=0;
    for(char &c:s){
        int t = c - '0';
        if(t&1){
            cout<<even[ctr1++];
        }
        else{
            cout<<odd[ctr2++];
        }
    }


}
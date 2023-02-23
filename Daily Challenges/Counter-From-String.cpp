#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int ctr=0;
    string s;
    cin>>s;
    for(char &c:s){
        if(c=='I') ctr++;
        else if(c=='D') ctr--;
        else if(c=='R') ctr=0;
    }

    cout<<ctr;
}
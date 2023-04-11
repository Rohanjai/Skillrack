#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    char ch;
    int n;
    cin>>ch>>n;
    string s="";
    for(int i=0;i<n;i++){
        if(ch>'z'){
            break;
        }
        s+=ch;
        ch++;
    }
    reverse(s.begin(),s.end());
    cout<<s;


}
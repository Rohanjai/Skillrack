#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string n;
    cin>>n;
    int os=0,es=0;
    for(char &c:n){
        int i = c-'0';
        if(i&1){
            os+=i;
        }
        else{
            es+=i;
        }
    }
    if(es>=os){
        reverse(n.begin(),n.end());
        int i= stoi(n);
        cout<<i;
    }
    else{
        for(char &c:n){
            int i = c-'0';
            if(i&1){
                cout<<c;
            }
        }
    }


}
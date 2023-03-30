#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int m=0,n=0;
    cin>>s;
    for(char &c:s){
        if(c>='a' and c<='m'){
            m++;
        }
        else{
            n++;
        }
    }
    if(m==n){
        cout<<"-1";
    }
    else if(m>n){
        cout<<"FIRSTHALF";
    }
    else{
        cout<<"SECONDHALF";
    }


}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int x=count(s.begin(),s.end(),'y');
    int y=count(s.begin(),s.end(),'n');
    if(x>y){
        cout<<"YES";
    }
    else if(y>x){
        cout<<"NO";
    }
    else{
        cout<<"EQUAL";
    }


}
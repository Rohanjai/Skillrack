#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int cnt=0;
    for(char &c:s){
        if(c=='-'){
            cnt--;
        }
        else{
            cnt++;
        }
    }
    cout<<abs(cnt);


}
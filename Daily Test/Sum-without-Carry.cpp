#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int a,b;
    cin>>a>>b;
    string s="";
    while(a>0){
        int x=(a%10)+(b%10);
        s+=to_string(x%10);
        a/=10;
        b/=10;
    }
    reverse(s.begin(),s.end());
    cout<<stoi(s);
    


}
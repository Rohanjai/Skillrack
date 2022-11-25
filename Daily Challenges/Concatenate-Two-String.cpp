#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s1,s2;
    int a,b;
    cin>>s1>>s2>>a>>b;
    for(int i=0;i<a;i++){
        cout<<s1[i];
    }
    for(int i=s2.length()-b;i<=s2.length()-1;i++){
        cout<<s2[i];
    }
    cout<<endl;
    for(int i=0;i<s2.length()-b;i++){
        cout<<s2[i];
    }
    for(int i=a;i<s1.length();i++){
        cout<<s1[i];
    }


}
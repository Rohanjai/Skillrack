#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.length();
    int n2=s2.length();
    if(n1==n2 ){
        cout<<"NO";
        return 0;
    }
    if(n1<n2 && n1!=n2-1){
        cout<<"NO";
        return 0;
    }
    if(n1>n2 && n1!=n2+1){
        cout<<"NO";
        return 0;
    }
    cout<<"YES";


}
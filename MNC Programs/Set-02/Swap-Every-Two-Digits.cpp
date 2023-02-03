#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.length(),n2=s2.length();
    if(n1&1){
        n1--;
    }
    if(n2&1){
        n2--;
    }
    for(int i=0;i<n1;i+=2){
        swap(s1[i],s1[i+1]);
    }
    for(int i=0;i<n2;i+=2){
        swap(s2[i],s2[i+1]);
    }
    long long int x = stol(s1),y=stol(s2);
    cout<<x+y;


}
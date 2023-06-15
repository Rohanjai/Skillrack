#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
        cout<<(i%2==0 ? s1[i]:s2[i]);
    }


}

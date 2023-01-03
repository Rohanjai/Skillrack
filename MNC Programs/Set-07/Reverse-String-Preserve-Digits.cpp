#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    for(int i=0,j=s.length()-1;i<j;){
        while(isdigit(s[i])){
            i++;
        }
        while(isdigit(s[j])){
            j--;
        }
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s;


}
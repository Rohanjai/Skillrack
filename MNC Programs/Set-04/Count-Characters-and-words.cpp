#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    getline(cin,s);
    cout<<s.length()<<endl;
    stringstream ss(s);
    string word;
    int ctr=0;
    while(ss>> word){
        ctr++;
    }
    cout<<ctr;


}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    while(ss >> word){
        cout<<word[0];
    }


}
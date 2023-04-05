#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    getline(cin,s);
    int ctr=0;
    stringstream ss(s);
    string word;
    while(ss >> word){
        int lc=0;
        for(char c:word){
            if(isupper(c) or ispunct(c) or isdigit(c)){
                lc=1;
            }
        }
        if(lc==0){
            ctr++;
        }
    }
    cout<<ctr;
    

}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    char ch;
    int n;
    cin>>ch>>n;
    while(n>0){
        cout<<ch;
        ch++;
        if(ch-1=='z'){
            ch='a';
        }
        n--;
    }


}
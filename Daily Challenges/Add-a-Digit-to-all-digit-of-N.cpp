#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string n;
    int d;
    cin>>n>>d;
    for(char &c:n){
        int x=c-'0';
        cout<<x+d;
    }

}

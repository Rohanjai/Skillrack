#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,bal=1000;
    cin>>n;
    while(n--){
        int amt;
        char ch;
        cin>>ch>>amt;
        switch(ch){
            case '+':
            bal+=amt;
            break;
            case '-':
            bal-=amt;
            break;
        }
    }
    cout<<bal;

}
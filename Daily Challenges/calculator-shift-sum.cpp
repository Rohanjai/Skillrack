#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int a,b,sh;
    char ch;
    scanf("%d%c%d\n%d",&a,&ch,&b,&sh);
    if(sh==0){
        switch(ch){
            case '+':
            cout<<a+b;
            break;
            case '-':
            cout<<a-b;
            break;
            case '*':
            cout<<a*b;
            break;
            case '/':
            cout<<a/b;
            break;
        }
    }
    else{
        switch(ch){
            case '+':
            cout<<a-b;
            break;
            case '-':
            cout<<a+b;
            break;
            case '*':
            cout<<a/b;
            break;
            case '/':
            cout<<a*b;
            break;
        }
    }


}
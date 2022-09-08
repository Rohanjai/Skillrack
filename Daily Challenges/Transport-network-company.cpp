#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    char ch;
    int n;
    cin>>ch>>n;
    if(ch=='O'){
        switch(n){
            case 1:
            cout<<"Ola Auto";
            break;
            case 2:
            cout<<"Ola Mini";
            break;
            case 3:
            cout<<"Ola Micro";
            break;
            case 4:
            cout<<"Ola Prime";
            break;
            default:
            cout<<"Invalid";
        }
    }
    else if(ch=='U'){
        if(n==1){
            cout<<"Uber Auto";
        }
        else if(n==2){
            cout<<"Uber Cab";
        }
        else{
            cout<<"Invalid";
        }
    }
    else{
        cout<<"Invalid";
    }


}
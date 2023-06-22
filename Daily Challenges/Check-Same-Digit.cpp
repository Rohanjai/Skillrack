#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string a,b;
    cin>>a>>b;
    if(a.find(b[0])!=string::npos or a.find(b[1])!=string::npos){
        cout<<"Valid";
    }
    else{
        cout<<"Invalid";
    }


}

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int a,b,c;
    cin>>a>>b>>c;
    while(a>c){
        a-=b;
    }
    cout<<(a==c ? "YES":"NO");


}

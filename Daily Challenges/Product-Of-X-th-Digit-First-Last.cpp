#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string n;
    int x;
    cin>>n>>x;
    int a=(int)n[x-1]-'0';
    int b= (int)n[n.length()-x]-'0';
    cout<<a*b;


}
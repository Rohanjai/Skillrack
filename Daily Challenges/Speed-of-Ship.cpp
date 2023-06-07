#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    float n,m;
    cin>>n>>m;
    int l=0;
    while(n>m){
        m+=m/4.0;
        l++;
    }
    cout<<l;


}

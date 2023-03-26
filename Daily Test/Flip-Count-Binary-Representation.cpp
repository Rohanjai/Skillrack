#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    string x="",y;
    while(n>0){
        x+=to_string(n%2);
        n/=2;
    }
    reverse(x.begin(),x.end());
    y=x;
    sort(y.begin(),y.end());
    // cout<<x<<endl<<y;
    int ctr=0;
    for(int i=0;i<x.size();i++){
        if(x[i]!=y[i]){
            ctr++;
        }
    }
    cout<<ctr;

}
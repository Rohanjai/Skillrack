#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string n;
    int x,sum=0;
    cin>>n>>x;
    for(int i=0;i<n.length();i+=x){
        int t=stoi(n.substr(i,x));
        sum+=t;
    }
    cout<<sum;
    


}
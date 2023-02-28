#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int x,y,z;
    cin>>x>>y>>z;
    int i=max({x,y,z}),n=min({x,y,z});
    for(i;i>=n;i--){
        cout<<i<<" ";
    }


}
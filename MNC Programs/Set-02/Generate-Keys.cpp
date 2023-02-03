#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string x,y,z;
    cin>>x>>y>>z;
    for(int i=0;i<4;i++){
        if(i%2==0)
        cout<<min(x[i],min(y[i],z[i]));
        else
        cout<<max(x[i],max(y[i],z[i]));
    }


}
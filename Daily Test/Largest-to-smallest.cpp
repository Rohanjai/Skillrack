#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int x,y;
    cin>>x>>y;
    if(y>x){
    for(int i=y;i>=x;i--)
    cout<<i<<" ";
    }
    else{
        for(int i=x;i>=y;i--){
            cout<<i<<" ";
        }
    }

}
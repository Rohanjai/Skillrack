#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int x,y;
    cin>>x>>y;
    for(int i=1;i<=min(x,y);i++){
        if(x%i==0 and y%i==0){
            cout<<i<<" ";
        }
    }


}
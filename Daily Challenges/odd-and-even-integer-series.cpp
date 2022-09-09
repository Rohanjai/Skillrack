#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x<y){
        for(int i=x;i<=y;i++){
            if(i&1){
                cout<<i<<" ";
            }
        }
    }
    if(y<x){
        for(int i=y;i<=x;i++){
            if(i%2==0){
                cout<<i<<" ";
            }
        }
    }
    if(y<z){
        for(int i=y;i<=z;i++){
            if(i&1){
                cout<<i<<" ";
            }
        }
    }
    if(z<y){
        for(int i=z;i<=y;i++){
            if(i%2==0)
            cout<<i<<" ";
        }
    }


}
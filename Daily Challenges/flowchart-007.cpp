#include <bits/stdc++.h> 
using namespace std;
void print(int m,int n){
    int ctr=m;
    while(ctr>=n){
        cout<<ctr;
        ctr--;
    }
}
int main(int argc, char** argv)
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x>y){
        print(x,y);
    }
    else{
        print(y,x);
    }
    if(y>z){
        print(y,z);
    }
    else{
        print(z,y);
    }


}
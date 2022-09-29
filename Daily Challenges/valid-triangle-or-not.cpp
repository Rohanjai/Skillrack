#include <bits/stdc++.h> 
using namespace std;
int main(int argc, char** argv)
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x+y+z==180 and x>0 and y>0 and z>0){
        cout<<"Valid triangle";
    }
    else{
        cout<<"Not a valid triangle";
    }
}
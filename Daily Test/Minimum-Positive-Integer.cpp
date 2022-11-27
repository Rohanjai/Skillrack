#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    long long int x,y,z;
    cin>>x>>y>>z;
    for(int i=1;;i++){
        if(i>=x and i<=y){
            continue;
        }
        else{
            if(i%z==0){
                cout<<i;
                break;
            }
        }
    }


}
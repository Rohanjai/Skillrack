#include <bits/stdc++.h>
 
using namespace std;
int main(int argc, char** argv)
{
    int x,y;
    cin>>x>>y;
    if(x<y){
        for(int i=x;i<=y;i++){
            if(i%2==0){
                cout<<i<<" ";
            }
        }
    }
    else{
        for(int i=x;i>=y;i--){
            if(i%2==0){
                cout<<i<<" ";
            }
        }
    }


}
#include <bits/stdc++.h> 
using namespace std;
bool same(int n){
    if(n<10){
        return false;
    }
    int cur=n%10;
    n/=10;
    while(n>0){
        if(n%10!=cur){
            return false;
        }
        n/=10;
    }
    return true;
}
int main(int argc, char** argv)
{
    int x,y;
    cin>>x>>y;
    for(int i=x;i<=y;i++){
        if(same(i)){
            continue;
        }
        cout<<i<<" ";
    }


}
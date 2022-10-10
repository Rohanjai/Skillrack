#include <bits/stdc++.h>
using namespace std;
bool contain(int n,int x){
    while(n>0){
        if(n%10==x){
            return true;
        }
        n/=10;
    }
    return false;
}
int main(int argc, char** argv)
{
    int n,x;
    bool flag=false;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        if(contain(i,x)){
            cout<<i<<" ";
            flag=true;
        }
    }
    if(!flag){
        cout<<-1;
    }
    return 0;


}
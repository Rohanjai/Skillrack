#include <bits/stdc++.h>
 
using namespace std;
bool isLeap(int n){
    if(n%400==0 or (n%100!=0 and n%4==0)){
        return true;
    }
    return false;
}
int main(int argc, char** argv)
{
    int x,y;
    bool print=false;
    cin>>x>>y;
    for(int i=x;i<=y;i++){
        if(isLeap(i)){
            print=true;
            cout<<i<<" ";
        }
    }
    if(!print)
        cout<<"-1";


}
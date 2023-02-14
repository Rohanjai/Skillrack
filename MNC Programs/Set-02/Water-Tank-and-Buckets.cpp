#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int x,y;
    cin>>x>>y;
    double check=x*0.8;
    int t,sum=0,ctr=0;
    while(cin >> t){
        ctr++;
        sum+=t;
        if(sum>=check){
            cout<<ctr;
            return 0;
        }
    }
    cout<<"TANK NOT FULL " ;


}
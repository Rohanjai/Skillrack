#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x,i=1,ctr=0;
    cin>>n>>x;
    while(true){
        if(x%2==0){
            cout<<-1;
            return 0;
        }
        if((x*i)&1){
            cout<<x*i<<" ";
            ctr++;
        }
        i++;
        if(ctr==n){
            break;
        }
    }


}
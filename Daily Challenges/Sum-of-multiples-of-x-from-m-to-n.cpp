#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int m,n,x,sum=0;
    cin>>m>>n>>x;
    for(int i=m;i<=n;i++){
        if(i%x==0){
            sum+=i;
        }
    }
    if(!sum){
        cout<<-1;
    }
    else{
        cout<<sum;
    }


}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,d,sum=0;
    bool sw=false;
    cin>>n>>d;
    for(int i=1;i<=n;i++){
        if(i%10==d){
            sum+=i;
            sw=true;
        }
    }
    if(!sw){
        cout<<-1;
        return 0;
    }
    cout<<sum;


}
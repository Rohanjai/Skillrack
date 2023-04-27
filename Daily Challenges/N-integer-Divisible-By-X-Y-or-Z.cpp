#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    for(int i=0,cnt=0;cnt<n;i++){
        if(i%x==0 and i%y!=0 and i%z!=0){
            cout<<i<<" ";
            cnt++;
        }
        else if(i%x!=0 and i%y==0 and i%z!=0){
            cout<<i<<" ";
            cnt++;
        }
        else if(i%x!=0 and i%y!=0 and i%z==0){
            cout<<i<<" ";
            cnt++;
        }
    }


}

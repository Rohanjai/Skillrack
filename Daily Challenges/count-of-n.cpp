#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x,y;
    cin>>n>>x>>y;
    int temp,ctr=0;
    for(int i=x+1;i<y;i++){
        temp=i;
        while(temp>0){
            if(temp%10==n){
                ctr++;
            }
            temp/=10;
        }
    }
    cout<<ctr;


}
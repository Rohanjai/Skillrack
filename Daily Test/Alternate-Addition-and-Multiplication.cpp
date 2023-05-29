#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int x;
    cin>>x;
    long sum=0;
    int f=0;
    for(int i=1;i<=x;i++){
        if(f==0){
            sum+=i;
            f=1;
        }else{
            sum=sum*i;
            f=0;
        }
    }cout<<sum;

}

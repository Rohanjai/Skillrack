#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    H: cin>>n;    
    if(n%2==0){
        sum+=n;         
    }
    if(n!=10){
        goto H; 
    }
    else{
        cout<<sum;
    }
}
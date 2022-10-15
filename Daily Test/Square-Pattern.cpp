#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,in=1;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int  j=n-i;j>1;j--){
            cout<<"* ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<in*in<<" ";
            in++;
        }
        for(int j=n-i;j>1;j--){
            cout<<"* ";
        }
    }


}
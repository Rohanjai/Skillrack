#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        for(int j=n-i;j>0;j--){
            
            cout<<"* ";
        }
        for(int j=n-i+1;j>0;j--){
            cout<<j<<" ";
        }
        for(int j=i;j>1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<"* ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        for(int j=i;j>1;j--){
            cout<<"* ";
        }
        for(int j=n-i+1;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }


}
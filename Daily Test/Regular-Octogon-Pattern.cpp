#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<"-";
        }
        for(int j=n+2*i;j>0;j--){
            cout<<"*";
        }
        for(int j=n-i-1;j>0;j--){
            cout<<"-";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=3*n-2;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-i-1;j>0;j--){
            cout<<"-";
        }
        for(int j=n+2*i;j>0;j--){
            cout<<"*";
        }
        for(int j=n-i-1;j>0;j--){
            cout<<"-";
        }
        cout<<endl;
    }
    

}
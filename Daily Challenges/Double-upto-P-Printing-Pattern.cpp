#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,p;
    cin>>n>>p;
    for(int i=1;i<=n;i++){
        if(i<=p){
            for(int j=1;j<=2*i;j++){
                cout<<i<<" ";
            }
        }
        else{
            for(int j=1;j<=i;j++){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    
    }


}
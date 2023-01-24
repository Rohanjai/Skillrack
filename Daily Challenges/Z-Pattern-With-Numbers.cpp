#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int ctr=n-1;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=n;i>2;i--){
        for(int j=i;j>1;j--){
            if(j==2){
                cout<<ctr--<<endl;
                break;
            }
            cout<<"* ";
            
        }
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }


}
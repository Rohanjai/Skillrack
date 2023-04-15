#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int x,y;
    cin>>x>>y;
    int a[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>a[i][j];
        }
    }for(int i=0;i<x;i++){
        for(int j=0;j<y-1;j++){
            if(a[i][j+1]%2==1){
                cout<<a[i][j]<<" ";
            }else{
                cout<<"* ";
            }
        }cout<<"* ";
        cout<<endl;
    }

}
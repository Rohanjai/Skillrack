#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int m1[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m1[i][j];
        }
    }
    int m2[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m2[i][j];
            if(m2[i][j]!=m1[i][n-j-1]&&m2[i][j]!=m1[n-i-1][j]){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";


}
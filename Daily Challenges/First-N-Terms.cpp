#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,d=1;
    cin>>n; 
    for(int i=1;i<=n;i++){
        int sum=0; 
        for(int j=1;j<=i;j++){
            sum+=d++;
        }
        cout<<sum<<" ";
    }
}
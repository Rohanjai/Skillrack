#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        int t;
        for(int j=0;j<c;j++){
            cin>>t;
            if((i==0 and j==0)  or (j==c-1 and i==0) or (i==r-1 and j==0) or (j==c-1 and i==r-1)){
                cout<<t<<" ";
            }
        }
    }


}
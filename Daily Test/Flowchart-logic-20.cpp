#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,r,c;
    cin>>n;
    r=1;
    while(r<=n){
        int printval;
        if(r&1){
            printval=1;
        }
        else{
            printval=2;
        }
        c=1;
        while(c<=r){
            cout<<printval;
            printval+=2;
            c++;
        }
        cout<<endl;
        r++;
    }


}
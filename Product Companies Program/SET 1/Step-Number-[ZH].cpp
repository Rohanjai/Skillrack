#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    long long int n;
    cin>>n;
    while(n>9){
        int cur=n%10;
        int prev=(n/10)%10;
        if(abs(prev-cur)!=1){
            cout<<"no";
            return 0;
        }
        n/=10;
    }
    cout<<"yes";


}
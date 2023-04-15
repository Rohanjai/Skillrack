#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    if(n<100){
        cout<<n%10;
    }
    else{
        int x=n%10;
        n/=100;
        n*=10;
        n+=x;
        cout<<n;
    }


}
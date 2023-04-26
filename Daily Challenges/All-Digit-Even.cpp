#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    while(n>0){
        if(n%10%2!=0){
            cout<<"NO";
            return 0;
        }
        n/=10;
    }
    cout<<"YES";


}

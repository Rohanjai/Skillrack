#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int a,b;
    cin>>a>>b;
    for(int i=2;i<=min(a,b);i++){
        if(a%i== 0 and b%i==0){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;


}

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,sum=0;
    cin>>n;
    while(n>0){
        string s;
        int x,y;
        cin>>s;
        if(s=="rectangle"){
            cin>>x>>y;
            sum+=(x*y);
        }
        else{
            cin>>x;
            sum+=(x*x);
        }
        n--;
    }
    cout<<sum;
    


}
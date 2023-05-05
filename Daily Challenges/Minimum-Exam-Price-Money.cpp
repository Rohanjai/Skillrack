#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int b,p,n;
    cin>>b>>p>>n;
    pair<int,int> pr={0,0};
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        pr.first+=a;
        pr.second+=b;
    }
    cout<<min((pr.first*b+pr.second*p),(pr.first*p+pr.second*b));

}

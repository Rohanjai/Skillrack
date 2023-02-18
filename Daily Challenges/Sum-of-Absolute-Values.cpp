#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int sum=0,t;
    while(cin >> t){
        sum+=abs(t);
    }
    cout<<sum;


}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x,y;
    cin>>n>>x>>y;
    int ans=0,power=0;
    while(n>0){
        ans+=(n%10)*pow(x,power);
        power++;
        n/=10;
    }
    vector<int>arr;
    while(ans>0){
        arr.push_back(ans%y);
        ans/=y;
    }
    reverse(arr.begin(),arr.end());
    for(int &i:arr){
        cout<<i;
    }


}
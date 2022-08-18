#include <bits/stdc++.h>
 
using namespace std;

#define int long long
int fac_count(int val,int k){
    int ans = 2;
    int i = 2;
    while(i*i<val && ans-2<=k){
        if(val%i==0)ans+=2;
        i++;
    }
    return ans+=i*i==val;
}

signed main(int argc, char** argv)
{
    int n,k;
    cin>>n>>k;
    int val;
    bool flag = 1;
    for(int i = 0 ;i<n;i++){
        cin>>val;
        if(fac_count(val,k)<=k){
            cout<<val<<" ";
            flag = 0;
        }
    }
    if(flag)cout<<-1;
}
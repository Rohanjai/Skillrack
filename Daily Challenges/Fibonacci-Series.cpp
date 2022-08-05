#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int n;
    cin >> n;
    vector<int> dp(102);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=100;++i){
        dp[i]=dp[i-1]+dp[i-2];
    }
    while(n--){
        int x;
        cin >> x;
        if(find(dp.begin(),dp.end(),x) != dp.end()) cout << x << " ";
    }
}
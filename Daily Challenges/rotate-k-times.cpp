#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    #define int long long
    int len;
    cin >> len;
    vector<int> vec(len);
    for(auto & i : vec) {
        cin >> i;
    }
    int k; cin >> k;
    k %= len;
    rotate(vec.begin(), vec.begin()+len-k, vec.end());
    for(auto & i : vec) {
        cout << i << " ";
    }
}
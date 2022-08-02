#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int N; cin >> N;
    vector<int> arr(N);
    
    for(int &i : arr) cin >> i;
    
    int ind = N-1;
    while(ind>=0 && arr[ind]%10){
        ind-=arr[ind]%10;
    }
    cout << (ind<=-1 ? arr[0] : arr[ind]);
}
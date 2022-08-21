#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int M; cin >> M;
    vector<int> arr(M);
    for(int &i : arr) cin >> i;
    
    int N, K; cin >> N >> K;
    K%=N;
    for(int i=0; i<M; i+=N){
        int end = i+N>=M ? M : i+N;
        int sz = end-i;
        int rot = K%sz;
        rotate(arr.begin()+i, arr.begin()+i+rot, arr.begin()+end);
    }
    for(int i : arr) cout << i << " ";
}
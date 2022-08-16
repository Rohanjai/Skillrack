#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int M, N; cin >> M >> N;
    
    vector<vector<int>> mat(M, vector<int>(M));
    
    for(auto &i : mat) for(auto &j : i) cin >> j;
    int ans=0;
    for(int i=0; i<=M-N; i++){
        for(int j=0; j<=M-N; j++){
            for(int k=i; k<N+i; k++){
                if(mat[k][j]%2 || mat[k][j+N-1]%2) goto end; 
            }
            for(int k=j; k<N+j; k++){
                if(mat[i][k]%2 || mat[i+N-1][k]%2) goto end;
            }
            ans++;
            end:;
        }
    }
    cout << ans;
}
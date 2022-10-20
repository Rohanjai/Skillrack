#include <bits/stdc++.h>

using namespace std;
int main(int argc, char** argv)
{
    int R, C;
    cin >> R >> C;
    
    vector<vector<int>> mat(R, vector<int>(C));
    for(vector<int>&i : mat)
        for(int &j : i)
            cin >> j;
            
    
    for(int i=0; i<min(R, C); i++){
        for(int j=0; j<min(R, C)-i; j++){
            int leftDist = j;
            int topDist = i;
            int botDist = R-1-leftDist;
            int rightDist = C-1-topDist;
            
            swap(mat[topDist][leftDist], mat[botDist][rightDist]);
        }
    }
    
    for(int i=0; i<R; i++){
        for(int j=min(R, C)-i, k = C-i-2; j<k; j++, k--){
            swap(mat[i][j], mat[i][k]);
        }
    }
    
    for(int i=0; i<C; i++){
        for(int j = min(R, C)-i, k = R-i-2; j<k; j++, k--){
            swap(mat[j][i], mat[k][i]);
        }
    }
    for(vector<int>&i : mat){
        for(int j : i)
            cout << j << " ";
        cout << endl;
    }
    
}
#include <bits/stdc++.h>
 
using namespace std;

const int AST = -1;

void replace(vector<vector<int>>& A, int flag) {
    
    for (int i = 0; i < A.size(); i++) {
        
        for (int j = 0; j < A[0].size(); j++) {
            
            if (A[i][j] % 2 == flag) {
                A[i][j] = AST;
            }
            
        }
        
    }
    
}

int main(int argc, char** argv)
{
    int R, C, E = 0, O = 0;
    
    cin >> R >> C;
    
    vector<vector<int>> A(R, vector<int>(C));
    
    for (int i = 0; i < R; i++) {
        for (int j =0 ; j < C; j++) {
            
            cin >> A[i][j];
            
            E += (A[i][j] % 2 == 0);
            
            O += (A[i][j] % 2 == 1);
            
        }
    }
    
    replace(A, (E >= O ? 0 : 1));
    
    
    int ROW[R]={0};
    int COL[C]={0};
    
    bool printed = false;
    
    
    for (int i = 0; i < R; i++) {
        
        for (int j = 0; j < C; j++) {
            
            if (A[i][j] == AST) {
                ROW[i]++;
                COL[j]++;
            }
            
        }
        
    }
    
    for (int i = 0; i < R; i++) {
        
        bool rowPrinted = false;
        
        if (ROW[i] == C)
            continue;
        
        for (int j = 0; j < C; j++) {
            
            if (COL[j] != R) {
                
                if (A[i][j] != AST) {
                    cout << A[i][j] << " ";
                } else {
                    cout << "* ";
                }
                
                rowPrinted = true;
                printed = true;
                
            }
            
        }
        
        if (rowPrinted)
            cout << endl;
        
    }
    
    if (!printed)
        cout << -1;
    
}
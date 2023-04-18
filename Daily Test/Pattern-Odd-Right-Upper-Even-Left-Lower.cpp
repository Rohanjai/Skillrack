#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int N;
    
    int e = 2, o = 1;
    
    cin >> N;
    
    vector<vector<int>> V(N, vector<int>(N, 0));
    
    for (int j = 0; j < N; j++) {
        
        for (int i = 0; i < N; i++) {
            
            if (j - i < 0) {
                V[i][j] = e;
                e += 2;
            }
            
            if (j - i > 0) {
                V[i][j] = o;
                o += 2;
            }
            
        }
        
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << V[i][j] << " ";
        }
        cout << endl;
    }
    
}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r,m,n;
    cin >> r >> m >> n;
    int arr[r][m],ar[r][n];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < n; j++) {
            cin >> ar[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < max(m,n); j++) {
            if (j < m) {
                cout << arr[i][j] << " ";
            }
            if (j < n) {
                cout << ar[i][j] << " ";
            }
        }
        cout << endl;
    }
}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r,c;
    cin >> r  >> c;
    int mat[r][c];
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin >> mat[i][j];
        }
    }
    int h=1,v=1;
    for(int i=0;i<r/2;++i){
        string s1="",s2="";
        for(int j=0;j<c;++j){
            s1+=to_string(mat[i][j]);
            s2+=to_string(mat[r-i-1][j]);
        }
        if(s1!=s2){
            h=0;break;
        }
    }
    for(int j=0;j<c/2;++j){
        string s1="",s2="";
        for(int i=0;i<r;++i){
            s1+=mat[i][j];
            s2+=mat[i][c-j-1];
        }
        if(s1!=s2){
            v=0;break;
        }
    }
    if(h and v) cout << 'S';
    else if(h) cout << 'H';
    else if(v) cout << 'V';
    else cout << -1;
}
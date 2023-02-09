#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int max = 0;
    int mat[n][n];
    int col = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]>max)
            {
                max = mat[i][j];
                col  = j;
            }
        }
    }
    
    int smax = 0;
    int scol = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]>smax &&  j!=col)
            {
                smax = mat[i][j];
                scol = j;
            }
        }
    }
    
    
    for(int i=0;i<n;i++)
    {
        cout<<mat[i][col]<<" "<<mat[i][scol]<<"\n";
    }
}
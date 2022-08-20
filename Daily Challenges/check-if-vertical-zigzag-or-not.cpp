/*The program must accept an integer matrix with size NxN as input. The program must print "Yes" if the given matrix is vertically zig-zag. 
Else the program must print "No" as the output.
Note: The matrix must be filled with first N*N natural numbers starting from 1 in vertical zig-zag fashion.
Boundary Condition(s):
1 <= N <= 500 <= Matrix Elements <= 999
Input Format:
The first line contains the value of N.The next N lines contain N integers separated by space(s).
Output Format:
The first line contains either "Yes" or "No".
Example Input/Output 1:
Input:5
1 10 11 20 21
2 9 12 19 22
3 8 13 18 23
4 7 14 17 24
5 6 15 16 25
Output:
Yes
Example Input/Output 2:
Input:3
1 2 3
4 5 6
7 8 9
Output:
No*/
#include <bits/stdc++.h>
 
using namespace std;
int main(int argc, char** argv)
{
    int n,val=1;
    bool flag=1;
    cin>>n; 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++,val++){
                if(val==arr[j][i]){
                    continue;
                }
                else{
                    flag=0;
                }
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                if(val==arr[j][i]){
                    continue;
                }
                else{
                    flag=0;
                }
            }
        }
    }
    if(flag==0){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
}
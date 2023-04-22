#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
int r,c;
cin>>r>>c;
char arr[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
    cin>>arr[i][j];
}
int rs=0,re=r-1,cs=0,ce=c-1;
while(rs<=re&&cs<=ce){
    rs++,re--;
    cs++,ce--;
}
rs--,cs--,re++,ce++;
//cout<<rs<<re<<" "<<cs<<ce;
for(int i=rs;i<=re;i++){
    for(int j=cs;j<=ce;j++)
    cout<<arr[i][j]<<" ";
    cout<<endl;
}
}
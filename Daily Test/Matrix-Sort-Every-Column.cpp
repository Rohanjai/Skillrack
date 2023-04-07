#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{

int r,c;cin>>r>>c;
vector<vector<int>> v(c,vector<int>(r));

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
    cin>>v[j][i];
}

for(int i=0;i<c;i++)
sort(v[i].begin(),v[i].end());

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
    cout<<v[j][i]<<" ";
    cout<<"\n";
}
}
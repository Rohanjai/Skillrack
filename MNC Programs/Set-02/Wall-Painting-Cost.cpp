#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int x,y,m,n;
    double s1=0,s2=0;
    cin>>x>>y>>m>>n;
    vector<double> in(m),ot(n);
    for(int i=0;i<m;i++){
        cin>>in[i];
    }
    for(int i=0;i<n;i++){
        cin>>ot[i];
    }
    s1=accumulate(in.begin(),in.end(),0.0);
    s2=accumulate(ot.begin(),ot.end(),0.0);
    printf("%.2f",((s1*x)+(s2*y)));
    


}
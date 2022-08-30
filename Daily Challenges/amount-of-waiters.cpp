#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int w,n;
    cin>>w>>n;
    int fam[n],waiters[w]={0};
    for(int i=0;i<n;i++){
        cin>>fam[i];
    }
    for(int i=0,j=0;i<n;i++){
        if(j==w){
            j=0;
        }
        waiters[j++]+=fam[i];
    }
    for(int i=0;i<w;i++){
        cout<<waiters[i]<<" ";
    }


}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int h=0,min=0;
    for(int i=0;i<n;i++){
        int x,y;
        scanf("%d:%d",&x,&y);
        h+=x;
        min+=y;
    }
    h+=(min/60);
    min=(min%60);
    cout<<h<<" "<<min;


}
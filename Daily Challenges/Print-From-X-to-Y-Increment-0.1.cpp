#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    float x,y;
    cin>>x>>y;
    x*=10;y*=10;
    for(float i=x;i<=y;i++){
        printf("%.1f ",i/10.0);
    }

}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        for(int j=1;j<=t*2;j++){
            if(j >= t-(i-1) && j<= t+i) printf("*");
            else printf("-");
        }printf("\n");
    }
    return 0;
}
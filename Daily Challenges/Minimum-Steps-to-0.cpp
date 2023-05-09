#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,k;
    scanf("%llu %llu",&n,&k);
    unsigned long long steps=0;
    while(n>0){
        if(n%k==0){
            n/=k;
            steps++;
        }
        else{
           steps+=n%k;
           n-=n%k;
        }
    }
    printf("%llu",steps);

}

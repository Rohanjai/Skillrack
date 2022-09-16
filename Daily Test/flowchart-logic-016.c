#include<stdio.h>
#include<stdlib.h>

int main()
{
    double M, N;
    scanf("%lf%lf", &M, &N);
    while(N>0){
        M/=10;
        N-=1;
    }
    printf("%.4lf", M);
}
#include<stdio.h>

int main()
{
    int N, ctr=0, till;
    scanf("%d",&N);
    till=N%10;
    ctr++;
    if(N%10==0){
        printf("0");
    }
    while(ctr<=till){
        printf("%d",ctr--);
        ctr++;
        if(till!=0){
        ctr++;
            
        }
    }
}
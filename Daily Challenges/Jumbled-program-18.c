#include<stdio.h>
void countDivisors(int n,int x){
    int ctr,count=0;
    for(ctr=1;ctr<=n;ctr++){
        if(n%ctr==0 && ctr%x==0){
            count++;
        }
    }
    printf("%d",count);
}
int main(){
    int num,x;
    scanf("%d %d",&num,&x);
    countDivisors(num,x);
}

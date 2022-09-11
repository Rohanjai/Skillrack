#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,x,sum=0,curr;
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++){
        scanf("%d",&curr);
        if(curr%x==0){
            sum=sum|curr;
        }
    }
    printf("%d",sum);

}
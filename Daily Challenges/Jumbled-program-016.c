#include<stdio.h>
int main(){
    int n,sum=0,pro=1;
    scanf("%d",&n);
    while(n>0){
        if(n%2==0)
        pro*=n%10;
        else
        sum+=n%10;
        n/=10;
    }
    if(pro%sum==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}

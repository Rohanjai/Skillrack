#include<stdio.h>
int main(){
    int left,right,divisor,ctr=0;
    scanf("%d %d %d",&left,&right,&divisor);
    for(int i=left;i<=right;i++){
        if(i%divisor==0){
            ctr++;
        }
    }
    if(ctr>1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;    
}
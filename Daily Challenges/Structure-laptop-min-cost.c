#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
struct device{
    int X,cost;
    union name{
        char brandName[101];
        int productNumber;
    }nameOrNum;
};
int main(){
    int N,X,min=INT_MAX;
    scanf("%d",&N);
    struct device laptops[N];
    for(int i=0;i<N;i++){
        scanf("%d",&X);
        if(X==1){
            laptops[i].X=1;
            scanf("%s %d",laptops[i].nameOrNum.brandName,&laptops[i].cost);
        }
        else if(X==2){
            laptops[i].X=2;
            scanf("%d %d",laptops[i].nameOrNum.productNumber,&laptops[i].cost);

        }
    }
    int id;
    for(int i=0;i<N;i++){
        if(laptops[i].cost<min){
            min=laptops[i].cost;
            id=i;
        }
    }
    if(laptops[id].X==1){
        printf("%s",laptops[id].nameOrNum.brandName);
    }   
    else  if(laptops[id].X==2)  {
        printf("%d",laptops[id].nameOrNum.productNumber);
    }
    return 0;
}




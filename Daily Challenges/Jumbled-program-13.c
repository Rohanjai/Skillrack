#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n],count[100000]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        count[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(count[arr[i]]==k){
            printf("%d ",arr[i]);
            count[arr[i]]--;
        }
    }
}
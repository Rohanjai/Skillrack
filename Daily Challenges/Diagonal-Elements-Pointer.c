#include<stdio.h>
void printDiagonal(int *matrix,int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                printf("%d ",(*(matrix+i*N+j)));
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printDiagonal(arr,n);
}
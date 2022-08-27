#include<stdio.h>
#include<stdlib.h>

int main()
{
int N;
scanf("%d",&N);
int mat[N][N];
for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
        scanf("%d",&mat[i][j]);
for(int j=0;j<N;j++){
    for(int i=N-1;i>=0;i--){
        printf("%d ",mat[i][j]);
    }
    printf("\n");
}        
}
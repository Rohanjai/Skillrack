/**/

#include<stdio.h>
#include<stdlib.h>
int n,l[101][101],k=0,p=0;
void dfs(int start){
    if(p>k)
    return;
    for(int i=0;i<n;i++){
        if(l[start][i]==1 && i!=start){
            printf("%d ",i+1);
            l[start][i]=-1;
            k++;
            for(int j=0;j<n;j++)
            l[j][i]=-1;
            dfs(i);
        }
        //l[start][i]=-1;
    }
}
int main()
{
    int start;
    scanf("%d %d",&n,&start);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&l[i][j]);
        }
    }
    start-=1;
    printf("%d ",start+1);
    for(int i=0;i<n;i++){
        l[i][start]=-1;
    }
    dfs(start);

}
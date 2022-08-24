/*
An N*N matrix representation of a graph is given as input, where 1 at Mth row and Nth column denotes node M and node N are connected directly. 
A 0 denotes the two nodes are disconnected. Perform a depth-first traversal and print the nodes in the traversing order. When visiting the neighboring node, 
the priority must be given to the node with least value to visit first.
*/
#include<stdio.h>
#include<stdlib.h>
int queue[1001],l[101][101],k=0,n,rear=0,p=0;
int bfs(int x){
    if(p>k){
        return 0;
    }
    for(int i=0;i<n;i++){
        if(l[x][i]==1 && i!=x){
            queue[k++]=i;
            l[x][i]=-1;
            l[i][x]=-1;
            for(int j=0;j<n;j++){
                l[j][i]=-1;
            }
        }
    }
    return bfs(queue[p++]);
}
int main()
{
    int c;
    scanf("%d %d\n",&n,&c);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&l[i][j]);
        }
    }
    c=c-1;
    printf("%d ",c+1);
    bfs(c);
    for(int i=0;i<k;i++){
        printf("%d ",queue[i]+1);
    }

}
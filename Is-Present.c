#include <stdio.h>
#include <stdlib.h>
int isPresent(int M, int N)
{
    char a[50],b[50];
    sprintf(a,"%d",M);
    sprintf(b,"%d",N);
    if(strstr(a,b)!=NULL) {
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{
    int M, N;
    scanf("%d%d", &M, &N);
    printf(isPresent(M, N) ? "YES" : "NO");
    return 0;
}

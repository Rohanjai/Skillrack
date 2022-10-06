#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n][100];
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    int totrow=strlen(str[0]);
    for(int i=0;i<totrow;i++){
        for(int j=0;j<n;j++){
            printf("%c",str[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}

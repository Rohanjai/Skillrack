#include<stdio.h>
#include<stdlib.h>

int main()
{
    int k;
    char s[101];
    scanf("%s\n%d",s,&k);
    for(int i=0;i<k;i++){
        printf("%c",s[i]);
    }
    int len=strlen(s);
    for(int i=len-k;i<len;i++){
        printf("%c",s[i]);
    }

}
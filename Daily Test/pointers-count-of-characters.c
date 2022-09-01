#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *a, *b;
    char ch[1000],g,h;
    scanf("%s\n %c %c",ch,&g,&h);
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]==g)
        {
            a=&ch[i];
        }
        if(ch[i]==h)
        {
            b=&ch[i];
        }
    }
    printf("%d", abs(b - a) - 1);
    return 0;
}
#include<stdio.h>
int main()
{
    char str[101];
    int alphaCount[127] = {0};
    int len;
    scanf("%s%n", str, &len);
    for(int index = 0; index < len; index++)
    {
        alphaCount[str[index]]++;
    }
    for(int index = 0; index <127; index++)
    {
        if(alphaCount[index] % 2 == 1)
        {
                printf("%c", (char)(index));
        }
    }
}
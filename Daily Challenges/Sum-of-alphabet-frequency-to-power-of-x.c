#include<stdio.h>

int main()
{
    char str[101], alphaCount[127] = {0};
    int len, X, index = 0, result = 0;
    scanf("%s%n %d",str, &len, &X);
    while(str[index]!='\0')
    {
        alphaCount[str[index]]++;
        index++;
    }
    for(char start='a'; start <= 'z'; start++)
    {
        if(alphaCount[start] >= 0)
        {
            result += pow(alphaCount[start], X);
        }
    }
    printf("%d", result);
}

#include<stdio.h> 
int main() 
{ 
    char str[101]; 
    int len, count = 2 ; 
    scanf("%s%n", str, &len); 
    if(len - 1 <= 2) 
    { 
        printf("%d", len); 
        return 0; 
    } 
    for(int index = 1; index < len ; index++) 
    { 
        if(str[index - 1] == str[index + 1]) 
        { 
            count++; 
        } 
    } 
    printf("%d", count);
}
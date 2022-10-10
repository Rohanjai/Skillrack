#include<stdio.h>
#include<stdlib.h>
int alphaCount[128]={0};

void printAlphabet(char *str,int len) {
    int index=0;
    while(index<len) {
        if(alphaCount[str[index]]==1)
            printf("%c",str[index]);
        index++;
    }
}

int main()
{
char str1[101],str2[101];
scanf("%s %s",str1,str2);
int len1=strlen(str1),len2=strlen(str2),index=0;
while(index<len1) {
    alphaCount[str1[index]]++;
    index++;
}
index=0;
while(index<len2) {
    alphaCount[str2[index]]++;
    index++;
}
printAlphabet(str1,len1);
printAlphabet(str2,len2);
}
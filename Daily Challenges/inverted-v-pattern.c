#include<stdio.h>
#include<stdlib.h>
void print(char *s1,char *s2,int n)
{
    int len=n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf("-");
        }
        printf("%c",s1[len]);
        if(i!=0)
        {
        for(int j=0;j<2*(i-1)+1;j++)
        {
            printf("-");
        }
        }
        if(i!=0)
        printf("%c",s2[i]);
        len--; 
        printf("\n");
    }
}
int main()
{
   char str1[101],str2[101];
   scanf("%s%s",str1,str2);
   int len=strlen(str1)-1,len2=strlen(str2)-1;
   if(str1[len]==str2[0])
   {
       print(str1,str2,len);
   }
   else if(str1[0]==str2[len2])
   {
       print(str2,str1,len);
   }
   else
   {
       printf("-1"); 
       return 0;
   }
}
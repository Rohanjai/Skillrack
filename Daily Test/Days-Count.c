#include<stdio.h>
#include<stdlib.h>
int clp(int x)
{
    if(x%4==0 && (x%100!=0 || x%400==0))
    return 0;
    return 1;
}
int main()
{
int x,y,z,c=0;
scanf("%d-%d-%d",&x,&y,&z);
int a=1;
while(a!=y)
{
    if(a==2 && clp(x))
    c+=28;
    else if(a==2 && !clp(x))
    c+=29;
    else if(a==1|| a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
    c+=31;
    else
    c+=30;
    a++;
}
printf("%d",c+z);
}

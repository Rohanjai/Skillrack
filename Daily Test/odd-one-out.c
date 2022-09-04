#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int a[n];
    int i;
    
    int oddcount=0;
    int evencount=0;
    int oddposition;
    int evenposition;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            oddcount++;
            oddposition=i+1;
        }
        else
        {
            evencount++;
            evenposition=i+1;
        }
    }
    (oddcount<evencount)?printf("%d",oddposition):printf("%d",evenposition);
}
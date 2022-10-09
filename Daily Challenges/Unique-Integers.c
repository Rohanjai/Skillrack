#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int value, numberCount[1001] = {0};
    for(int ctr = 1; ctr <= N; ctr++){
        scanf("%d", &value);
        numberCount[value]++;
        if(numberCount[value] > 1){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}

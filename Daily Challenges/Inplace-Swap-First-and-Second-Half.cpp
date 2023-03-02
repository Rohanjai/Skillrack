void swapFirstHalfSecondHalf(char *str)
{
    int x=strlen(str);
    int i=0,j=x/2;
    while(i<x/2 && j<x){
        char x = str[i];
        str[i]=str[j];
        str[j]=x;
        i++;
        j++;
    }
    

}
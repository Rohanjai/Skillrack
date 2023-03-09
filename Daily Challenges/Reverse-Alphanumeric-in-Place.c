void reverseAlphanumeric(char *str)
{
    int r = strlen(str)-1;
    int l=0;
    while(l<r){
        if(!isalnum(str[l])){
            l++;
        }
        if(!isalnum(str[r])){
            r--;
        }
        if(isalnum(str[r]) && isalnum(str[l])){
            char t = str[l];
            str[l]=str[r];
            str[r]=t;
            l++;
            r--;
        }
    }

}
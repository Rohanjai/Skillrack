int findOddEvenDifference(int SIZE, int *arr)
{
    int oc=0,ec=0;
    for(int i=0;i<SIZE;i++){
        if(arr[i]&1){
            oc+=arr[i];
        }
        else{
            ec+=arr[i];
        }
    }
    return oc-ec;

}
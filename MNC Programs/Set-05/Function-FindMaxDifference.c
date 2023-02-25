int findMaxDifference(int SIZE, int *arr)
{
    int max=-99999;
    for(int i=0;i<SIZE-1;i++){
        if(arr[i]-arr[i+1]>max){
            max=arr[i]-arr[i+1];
        }
    }
    return max;

}
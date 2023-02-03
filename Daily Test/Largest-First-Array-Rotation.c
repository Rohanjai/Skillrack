void rotateArr(int arr[], int N)
{
    int x=arr[0];
    for(int i=1;i<N;i++){
        if(x<arr[i])
        x=arr[i];
    }
    if(arr[0]==x){
        return;
    }
    else{
        int t=arr[0];
        for(int i=1;i<N;i++){
            arr[i-1]=arr[i];
        }
        arr[N-1]=t;
        rotateArr(arr,N);
    }
    
}
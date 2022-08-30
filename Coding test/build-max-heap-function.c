#include<stdio.h>
#include"heap.h"
void buildMaxHeap(int arr[],int size,int i){
    int temp,left,right,largest,int N, K;
    left=(2*i)+1;
    right=(2*i)+2;
    if(left>=size){
        return;
    }
    else{
        largest=i;
    }
    if(right < size && arr[right]>arr[size]){
        largest=right;
    }
    if(largest!=i){
        temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        buildMaxHeap(arr,size,largest);
    }
}
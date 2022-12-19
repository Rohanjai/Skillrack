#include <stdio.h>

int main() {
	int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d,",&arr[i][j]);
        }
    }
    int w =arr[0][0];
    int i=0,j=0;
    while(i<n && j<n){
        if(i==n-1 && j==n-1){
            break;
        }
        int d,r;
        if(i<n-1 && j<n-1){
            d=arr[i+1][j];
            r=arr[i][j+1];
            if(d<r){
                if(d>w){
                    w=d;
                }
                i=i+1;
            }
            else{
                if(r>w){
                    w=r;
                }
                j+=1;
            }
        }
        else if(j==n-1 && i<n){
            d=arr[i+1][j];
            if(d>w){
                w=d;
            }
            i+=1;
        }
        else if(i==n-1 && j<n){
            r=arr[i][j+1];
            if(r>w){
                w=r;
            }
        }

    }

    printf("%d",w);
	return 0;
}


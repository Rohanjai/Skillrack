import java.io.*;
class Solution{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int x=sc.nextInt();
        int arr[][]=new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        int ctr=0;
        int startrow=0,endrow=n,startcol=0,endcol=n;
        while(startrow<endrow && startcol<endcol){
            for(int i=startcol;i<endcol;i+){
                ctr++;
                if(ctr==x){
                    System.out.print(arr[startrow][i]);
                }
            }
            startrow++;
            for(int i=startrow;i<endrow;i++){
                ctr++;
                if(ctr==x){
                    System.out.print(arr[i][endrow-1]);
                }
            }
            endrow--;
            if(startrow<endrow){
                for(int i=endcol-1;i>=startcol;i--){
                    ctr++;
                    if(ctr==x){
                        System.out.print(arr[endrow-1][i]);
                    }
                }
                endrow--;
            }
            if(startcol<endcol){
                for(int i=endrow-1;i>=startrow;i--){
                    ctr++;
                    if(ctr==c){
                        System.out.print(arr[i][startcol]);
                    }
                }
                startcol++;
            }
        }
    }
}
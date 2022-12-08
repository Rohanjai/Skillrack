import java.util.*;
public class Hello {
    public static int check(int arr[][],int r,int c,int mat[][],int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]!=arr[r+i][c+j]){
                    return 0;
                }
            }
        }
        return 1;
    }
    public static void main(String[] args) {
		var sc=new Scanner(System.in);
		int n=sc.nextInt();
		int m=sc.nextInt();
		int arr[][]=new int[n][n];
		for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		        arr[i][j]=sc.nextInt();
		    }
		}
		int mat[][]=new int[m][m];
		for(int i=0;i<m;i++){
		    for(int j=0;j<m;j++){
		        mat[i][j]=sc.nextInt();
		    }
		}
		for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		        if(arr[i][j]==mat[0][0]){
		            if(check(arr,i,j,mat,m)==1){
		                System.out.print("TRUE");
		                return ;
		            }
		        }
		    }
		}
		System.out.print("FALSE");

	}
}
import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int[][] arr=new int[n][n];
		for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		        arr[i][j]=sc.nextInt();
		    }
		}
		for(int i=0;i<n;i++){
		    int temp=arr[i][i];
		    arr[i][i]=arr[i][n-i-1];
		    arr[i][n-i-1]=temp;
		}
		for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		        System.out.print(arr[i][j]+" ");
		    }
		    System.out.println();
		}

	}
}
import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[][]= new int[n][n];
		for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		        arr[i][j]=sc.nextInt();
		    }
		}
		int k = sc.nextInt();
		for(int i=0;i<n;i++){
		    if(i<k){
		        continue;
		    }
		    for(int j=0;j<n;j++){
		        if(j<k){
		            continue;
		        }
		        System.out.print(arr[i][j]+" ");
		    }
		    System.out.println();
		}

	}
}
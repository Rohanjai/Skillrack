import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc =new Scanner(System.in);
		int m=sc.nextInt();
		int n=sc.nextInt();
		int arr[][]=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<m;i++){
            if(i==0){
                for(int j=0;j<n+2;j++){
                    System.out.print("* ");
                }
                System.out.println();
            }
            for(int j=0;j<n;j++){
                if(j==0){
                    System.out.print("* ");
                }
                System.out.print(arr[i][j]+" ");
            }
            System.out.println("*");
        }
        for(int i=0;i<n+2;i++){
            System.out.print("* ");
        }
	}
}
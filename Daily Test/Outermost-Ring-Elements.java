import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int r = sc.nextInt();
		int c = sc.nextInt();
		int arr[][]=new int[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i==0 || i==r-1 || j==0 || j==c-1){
                    System.out.print(arr[i][j]+" ");
                }
                else{
                    System.out.print("* ");
                }
            }
            System.out.println();
        }
	}
}
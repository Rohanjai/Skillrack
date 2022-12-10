import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[] = new int[n];
		for(int i =0 ;i<n;i++){
		    arr[i]=sc.nextInt();
		}
		int t=arr[0]/10%10;
		int u=arr[0]%10;
		for(int i=1;i<n;i++){
		    System.out.print(t*u+" ");
		    t=arr[i]/10%10;
		    u=arr[i]%10;
		}

	}
}
import java.util.*;
public class Hello {

    public static void main(String[] args) {
	    var sc = new Scanner(System.in);
	    int n =sc.nextInt();
	    int arr[]=new int[n];
	    for(int i=0;i<n;i++){
	        arr[i]=sc.nextInt();
	    }
	    for(int i=0;i<n-1;i++){
	        System.out.print(arr[i]+arr[i+1]+" ");
	    }
	}
}
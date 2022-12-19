import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[] = new int[n];
		int pos=-1;
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		    if(arr[i]%2==1){
		        pos=i;
		    }
		}
		for(int i=pos;i>=0;i--){
		    System.out.print(arr[i]+" ");
		}

	}
}
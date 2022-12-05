import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		var n=sc.nextInt();
		int arr[]=new int[n];
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++){
		    int pro=1;
		    while(arr[i]>0){
		        pro*=(arr[i]%10);
		        arr[i]/=10;
		    }
		    System.out.print(pro+" ");
		}

	}
}
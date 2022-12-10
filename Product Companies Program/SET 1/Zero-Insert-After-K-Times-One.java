import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();
		int arr[]= new int[n];
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		}
		int ctr=0;
		for(int i=0;i<n;i++){
		    if(ctr==k){
		        System.out.print("0 ");
		        ctr=0;
		    }
		    if(arr[i]==0){
		        ctr=0;
		    }
		    if(arr[i]==1){
		        ctr++;
		    }
		    System.out.print(arr[i]+" ");
		}
		if(ctr==k){
		    System.out.print("0");
		}

	}
}
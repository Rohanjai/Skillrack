import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int arr[]=new int[n];
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		}
		int sum=0;
		for(int i=0;i<n;i++){
		    System.out.print(sum+" ");
		    sum+=arr[i];
		}

	}
}
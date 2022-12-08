import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc=new Scanner(System.in);
		int n=sc.nextInt();
		int arr[]=new int[n];
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		}
		int sum=0;
		for(int i:arr){
		    sum+=i;
		}
		double d=(double)sum/(double)n;
		System.out.printf("%.2f",d);

	}
}
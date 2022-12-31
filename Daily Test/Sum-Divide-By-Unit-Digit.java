import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[]= new int[n];
		double sum=0.0;
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		    int t = arr[i]%10;
		    t = (t==0) ? 10 : t;
		    sum+=((double)arr[i]/t);
		}
		System.out.printf("%.3f",sum);

	}
}
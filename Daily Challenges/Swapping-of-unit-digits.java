import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc=new Scanner(System.in);
		int n=sc.nextInt();
		int[] arr=new int[n];
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		}
		int l=0,r=n-1;
		while(l<r){
		    int t1=arr[l]%10;
		    int t2=arr[r]%10;
		    arr[l]/=10;
		    arr[r]/=10;
		    arr[l]=arr[l]*10+t2;
		    arr[r]=arr[r]*10+t1;
		    l++;
		    r--;
		}
		for(int i: arr){
		    System.out.print(i+" ");
		}

	}
}
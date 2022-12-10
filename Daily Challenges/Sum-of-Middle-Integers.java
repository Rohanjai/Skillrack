import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int n=sc.nextInt();
		int arr[]=new int[n];
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		}
		int mid=n/2;
		if(n%2!=0){
		    System.out.print(arr[mid]+arr[mid+1]+arr[mid-1]);
		}
		else{
		    System.out.print(arr[mid]+arr[mid+1]+arr[mid-1]+arr[mid-2]);
		}

	}
}
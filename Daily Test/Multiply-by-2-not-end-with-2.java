import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[]=new int[n];
		boolean print = false;
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++){
		    if((arr[i]*2)%10!=2){
		        System.out.print(arr[i]*2+" ");
		        print = true;
		    }
		}
		if(!print){
		    System.out.print("-1");
		}

	}
}
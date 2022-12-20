import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int n = sc.nextInt();
		long arr[] = new long [n];
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextLong();
		}
		long sum=0;
		for(int i=0;i<n;i++){
		    if(arr[i]%10>=5){
		        while(arr[i]%10!=0){
		            arr[i]++;
		        }
		    }
		    else{
		        while(arr[i]%10!=0){
		            arr[i]--;
		        }
		    }
		    sum+=arr[i];
		}
		System.out.println(sum);

	}
}